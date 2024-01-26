/** =======================================================================
 * Author: Andreea Cobzaru
 * Date: 5 Jun, 2022
 *
 * Purpose: Final Project; Header file for game class
 *
 * Course:   Programming 25
 * Teacher:  Ms. Deepeka Dalal
* ========================================================================*/

#ifndef GAME_H
#define GAME_H
#include "functions.h"
#include "card.h"
#include "deck.h"
#include "game.h"
#include "genericplayer.h"
#include "hand.h"
#include "house.h"
#include "player.h"
#include "enums.h"
#include <vector>
#include <iostream>
#include <iomanip>

class Game
{
private:
    std::vector<Player> players;
public:
    Game();
    ~Game();
    void play();
};

#endif // GAME_H
