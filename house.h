/** =======================================================================
 * Author: Andreea Cobzaru
 * Date: 5 Jun, 2022
 *
 * Purpose: Final Project; Header file for house class - child of generic player
 *
 * Course:   Programming 25
 * Teacher:  Ms. Deepeka Dalal
* ========================================================================*/

#ifndef HOUSE_H
#define HOUSE_H
#include "enums.h"
#include "card.h"
#include "genericplayer.h"
#include <vector>

class House : public GenericPlayer
{
public:
    House();
    ~House();
    bool houseIsHitting();
    void flipFirstCard();
};

#endif // HOUSE_H
