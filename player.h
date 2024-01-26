/** =======================================================================
 * Author: Andreea Cobzaru
 * Date: 5 Jun, 2022
 *
 * Purpose: Final Project; Header file for player class - child of generic player
 *
 * Course:   Programming 25
 * Teacher:  Ms. Deepeka Dalal
* ========================================================================*/

#ifndef PLAYER_H
#define PLAYER_H
#include "genericplayer.h"
#include "enums.h"
#include <string>
#include <vector>
#include <iostream>

class Player : public GenericPlayer
{
private:
    std::string name;
public:
    Player(std::string);
    ~Player();
    std::string getName();
    bool isHitting();
    void lose();
    void win();
    void push();
};

#endif // PLAYER_H
