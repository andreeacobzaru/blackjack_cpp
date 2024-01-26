/** =======================================================================
 * Author: Andreea Cobzaru
 * Date: 5 Jun, 2022
 *
 * Purpose: Final Project; Header file for card class
 *
 * Course:   Programming 25
 * Teacher:  Ms. Deepeka Dalal
* ========================================================================*/

#ifndef CARD_H
#define CARD_H
#include "enums.h"
#include <string>

class Card
{
private:
    Suittype suit;
    Ranktype rank;
    std::string name;
    int value;
    bool isFaceUp;
public:
    Card(Suittype, Ranktype);
    ~Card();
    int setValue();
    int getValue();
    void flip();
    std::string getName();
    bool getIsFaceUp();
    void changeAce(int);
};

#endif // CARD_H
