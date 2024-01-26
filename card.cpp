/** =======================================================================
 * Author: Andreea Cobzaru
 * Date: 5 Jun, 2022
 *
 * Purpose: Final Project; Source file for card class
 *
 * Course:   Programming 25
 * Teacher:  Ms. Deepeka Dalal
* ========================================================================*/

#include "card.h"

Card::Card(Suittype s, Ranktype r)
{
    suit = s;
    rank = r;
    isFaceUp = true;
    name = ""; //name is concatenated to in this constructor further down
    value = Card::setValue();

    int rankNum = static_cast<int>(rank);
    if (rankNum != 1 && rankNum < 11){
        std::string ss = std::to_string(rankNum);
        name += ss;
    } else if (rankNum == 1){
        name += "A";
    } else if (rankNum == 11){
        name += "J";
    } else if (rankNum == 12){
            name += "Q";
    } else if (rankNum == 13){
            name += "K";
    }

    if (suit == clubs)
        name += "c";
    else if (suit == diamonds)
        name += "d";
    else if (suit == hearts)
        name += "h";
    else if (suit == spades)
        name += "s";

}

int Card::setValue()
{
    int value = static_cast<int>(rank);
    if (value > 10){
        value = 10; // jack, queen, king casted are all greater than 10, but worth ten
    } else if (value == 1){
        value = 11; // becomes 1 later if needed
    }
    return value;
}

int Card::getValue()
{
    return value;
}

void Card::flip()
{
    if (isFaceUp){
        isFaceUp = false;
    } else {
        isFaceUp = true;
    }
}

std::string Card::getName(){
    return name;
}

bool Card::getIsFaceUp(){
    return isFaceUp;
}

void Card::changeAce(int val){ // to change ace value when needed
    value = val;
}

Card::~Card(){

}
