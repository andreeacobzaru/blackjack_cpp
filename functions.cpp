/** =======================================================================
 * Author: Andreea Cobzaru
 * Date: 5 Jun, 2022
 *
 * Purpose: Final Project; Source file for functions
 *
 * Course:   Programming 25
 * Teacher:  Ms. Deepeka Dalal
* ========================================================================*/

#include "functions.h"


std::vector<Player> introduction(){
    std::cout << "Welcome to Blackjack!\n";
    float playersFloat;
    std::cout << "How many players? (1-7): ";
    while(!(std::cin >> playersFloat) || fmod(playersFloat, 1.0) != 0.0 || playersFloat < 1 || playersFloat > 7){ //sanitizing
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid input. Try again: ";
    }
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    size_t players = (int)playersFloat;
    std::vector<Player> playerList;
    playerList.reserve(players); //reserve space for vector

    std::string name;

    bool in = false;
    int currNumPlayers = 0;
    while (currNumPlayers < players){
        std::cout << "Enter player name: ";
        getline(std::cin, name); //uses getline so that whole line is taken in case there are spaces in the name
        for (int i = 0; i < currNumPlayers; i++){ //iterates only through part of list that is populated.
            if (name == playerList.at(i).getName()){ // checks player name isn't already inside
                std::cout << "That player is already in the game! ";
                in = true;
                break;
            }
        }
        if (!in){
            playerList.push_back(Player(name));
            currNumPlayers++;
        }
        in = false;
    }
    return playerList;
}

bool playAgain(){
    std::cout << std::endl <<"Do you want to play again (with the same players)? (Y/N): ";
    std::string ans;
    do {
        std::cin >> ans;
        if (ans == "Y" || ans == "y" || ans == "N" || ans == "n"){
            break;
        }
        else{
            std::cout << "Invalid input. Try again: ";
        }

    } while(true);
    std::cout << std::endl;
    if (ans == "y" || ans == "Y")
        return true;
    else
        return false;
}
