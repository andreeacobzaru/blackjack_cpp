/** =======================================================================
 * Author: Andreea Cobzaru
 * Date: 5 Jun, 2022
 *
 * Purpose: Final Project; Header file for hand class
 *
 * Course:   Programming 25
 * Teacher:  Ms. Deepeka Dalal
* ========================================================================*/

#ifndef HAND_H
#define HAND_H
#include <vector>
#include <iostream>
#include "enums.h"
#include "card.h"

class Hand
{
protected:
    std::vector<Card> cards; //makes it easier to access in child classes when protected
public:
    Hand();
    ~Hand();
    void add(Card card, bool faceUpOrDown);
    void clear();
    int getTotal();
    void printHand();

};

#endif // HAND_H
