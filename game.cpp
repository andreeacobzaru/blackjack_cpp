
/** =======================================================================
 * Author: Andreea Cobzaru
 * Date: 5 Jun, 2022
 *
 * Purpose: Blackjack Game in C++!
* ========================================================================*/

#include "game.h"

Game::Game()
{
    players = introduction();
}
void Game::play()
{
    Deck deck;
    House house;
    deck.populate();
    deck.shuffle();
    for (size_t playerInd = 0; playerInd < players.size(); playerInd++){
        deck.deal(players.at(playerInd), 2, true); // deals two cards to each player
    }
    deck.deal(house, 1, false); //first card from house is face down
    deck.deal(house, 1, true);
    for (Player player : players){
        std::cout << player.getName() << ": ";
        player.printHand();
        //std::cout << std::endl;
    }
    std::cout << "House: ";
    house.printHand();
    for (size_t playerInd = 0; playerInd < players.size(); playerInd++){
        std::cout << std::endl;
        while (players.at(playerInd).getTotal() != 21 && players.at(playerInd).isBusted() == false && players.at(playerInd).isHitting()){
            //does not ask player to hit if they have 21.
            deck.deal(players.at(playerInd), 1, true);
            std::cout << players.at(playerInd).getName() << ": ";
            players.at(playerInd).printHand();
        };
        if (players.at(playerInd).isBusted()){
            std::cout << players.at(playerInd).getName() << " busts." << std::endl;;
        }
    }
    house.flipFirstCard();
    std::cout << std::endl << "House" << ": ";
    house.printHand();
    while (house.houseIsHitting()){
        deck.deal(house, 1, true);
        std::cout << "House: ";
        house.printHand();
    }
    if (house.isBusted()){
        std::cout << "House busts." << std::endl;
        for (size_t playerInd = 0; playerInd < players.size(); playerInd++){
            if (players.at(playerInd).isBusted() == false){
                players.at(playerInd).win(); //reamaining players win if house busts
            }
        }
    } else {
        for (size_t playerInd = 0; playerInd < players.size(); playerInd++){
            if (players.at(playerInd).isBusted() == false){ //players that aren't busted get announced for losing, winning, or pushing
                if (players.at(playerInd).getTotal() < house.getTotal()){
                    players.at(playerInd).lose();
                } else if (players.at(playerInd).getTotal() > house.getTotal()){
                    players.at(playerInd).win();
                } else if (players.at(playerInd).getTotal() == house.getTotal()){
                    players.at(playerInd).push();
                }
            }
        }
    }
    for (size_t playerInd = 0; playerInd < players.size(); playerInd++){
        players.at(playerInd).clear(); //clear hands
    }
    deck.clear(); //clear deck to be remade when game starts again
}

Game::~Game(){

}
