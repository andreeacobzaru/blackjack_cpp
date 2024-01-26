/** =======================================================================
 * Author: Andreea Cobzaru
 * Date: 5 Jun, 2022
 *
 * Purpose: Final Project; Header file for deck class - child of hand class
 *
 * Course:   Programming 25
 * Teacher:  Ms. Deepeka Dalal
* ========================================================================*/

#ifndef DECK_H
#define DECK_H
#include "hand.h"
#include "genericplayer.h"
#include "enums.h"
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

class Deck: public Hand
{
private:
    std::vector<Card> deck;
public:
    Deck();
    ~Deck();
    void populate();
    void shuffle();
    void deal(Hand& hand, int numCards, bool faceUpOrDown);
    void printDeck();
};

#endif // DECK_H
