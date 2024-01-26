/** =======================================================================
 * Author: Andreea Cobzaru
 * Date: 5 Jun, 2022
 *
 * Purpose: Final Project; Source file for generic player class - child of hand
 *
 * Course:   Programming 25
 * Teacher:  Ms. Deepeka Dalal
* ========================================================================*/

#include "genericplayer.h"

GenericPlayer::GenericPlayer() : Hand()
{

}

bool GenericPlayer::isBusted(){
    if (getTotal() > 21){
        return true;
    }
    return false;
}
GenericPlayer::~GenericPlayer(){

}
