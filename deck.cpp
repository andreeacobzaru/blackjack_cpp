/** =======================================================================
 * Author: Andreea Cobzaru
 * Date: 5 Jun, 2022
 *
 * Purpose: Final Project; Source file for deck class - child of hand class
 *
 * Course:   Programming 25
 * Teacher:  Ms. Deepeka Dalal
* ========================================================================*/

#include "deck.h"

Deck::Deck()
{

}
void Deck::populate(){
    for (int s = 0; s <= 3; s++){
        for (int r = 1; r <= 13; r++){
            deck.push_back(Card(static_cast<Suittype>(s), static_cast<Ranktype>(r)));
        }
    }
}
void Deck::shuffle(){
    srand(time(NULL));
    int cardAmount = deck.size();
    int randInd;
    for(int insertInd = 0; insertInd < 52; insertInd++){ //insert random value at consecutive indexes
        randInd = rand()% (cardAmount - 1 - insertInd + 1) + insertInd;
        Card temp = deck.at(insertInd);
        deck.at(insertInd) = deck.at(randInd);
        deck.at(randInd) = temp;
    }
}
void Deck::deal(Hand& hand, int numCards, bool faceUpOrDown){ //arguments are hand to be given to, number of cards to be dealt, and whether they are face up or down
    for (int i = 0; i < numCards; i++){
        hand.add(deck.at(0), faceUpOrDown);
        deck.erase(deck.begin());
    }
}

//void Deck::printDeck(){ // this function was for making sure the deck was correctly made
//    for (Card card : Deck::deck){
//        std::cout << card.getName() << std::endl;
//    }
//}

Deck::~Deck(){

}
