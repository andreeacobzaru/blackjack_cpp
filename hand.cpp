/** =======================================================================
 * Author: Andreea Cobzaru
 * Date: 5 Jun, 2022
 *
 * Purpose: Final Project; Source file for hand class
 *
 * Course:   Programming 25
 * Teacher:  Ms. Deepeka Dalal
* ========================================================================*/

#include "hand.h"


Hand::Hand()
{

}

void Hand::add(Card card, bool faceUpOrDown){
    if (!faceUpOrDown){
        card.flip(); //cards start as faceUp, so flip if they should be faceDown
    }
    cards.push_back(card); //adds card to hand, does not use pointer because card is removed from deck in only function that uses add
}

void Hand::clear(){
    cards.clear(); //clears vector of objects
}

int Hand::getTotal(){
    int total = 0;
    for (Card c : cards){
        total+= c.getValue();
    }
    if (total > 21){ //check for an ace if total is greater than 21
        for (Card c : cards){
            if (c.getValue() == 11){ //change all aces to 1
                c.changeAce(1);
                total -= 10;
            }
        }
    }
    if (total <= 10) { //if making all aces 1 makes the total value less than 10, count one of the aces as 11
        for (Card c : cards){
            if (c.getValue() == 11){
                c.changeAce(11);
                total += 10;
                break;
            }
        }
    }
    return total;
}

void Hand::printHand(){
    bool printTotal = true;
    for (Card card : cards){
        if (card.getIsFaceUp()){
            std::cout << card.getName();
        } else {
            std::cout << "XX";
            printTotal = false;
        }
        std::cout << "  ";
    }
    if (printTotal){
        std::cout<< "(" << Hand::getTotal() << ")";
    }
    std::cout << std::endl;
}

Hand::~Hand(){

}
