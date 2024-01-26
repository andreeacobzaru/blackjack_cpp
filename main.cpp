/** =======================================================================
 * Author: Andreea Cobzaru
 * Date: 3 Jun, 2022
 *
 * Purpose: Final Project; Main file for a blackjack game
 *
 * Course:   Programming 25
 * Teacher:  Ms. Deepeka Dalal
* ========================================================================*/

#include <iostream>
#include <cmath>
#include "functions.h"
#include "card.h"
#include "deck.h"
#include "game.h"
#include "genericplayer.h"
#include "hand.h"
#include "house.h"
#include "player.h"
#include "enums.h"

using namespace std;

int main()
{
    Game game; //game object does not leave until program ends, can only play again with same players.
    while (true){
        game.play();
        if (!playAgain())
            break;
    }
    cout << "Thanks for playing!" << endl;
    return 0;
}

