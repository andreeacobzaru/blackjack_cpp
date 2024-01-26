/** =======================================================================
 * Author: Andreea Cobzaru
 * Date: 5 Jun, 2022
 *
 * Purpose: Final Project; Header file for generic player class - child of hand
 *
 * Course:   Programming 25
 * Teacher:  Ms. Deepeka Dalal
* ========================================================================*/

#ifndef GENERICPLAYER_H
#define GENERICPLAYER_H
#include "hand.h"
#include "enums.h"

class GenericPlayer : public Hand
{
public:
    GenericPlayer();
    ~GenericPlayer();
    bool isBusted();
};

#endif // GENERICPLAYER_H
