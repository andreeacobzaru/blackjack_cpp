/** =======================================================================
 * Author: Andreea Cobzaru
 * Date: 5 Jun, 2022
 *
 * Purpose: Final Project; Source file for house class - child of generic player
 *
 * Course:   Programming 25
 * Teacher:  Ms. Deepeka Dalal
* ========================================================================*/

#include "house.h"

House::House() :GenericPlayer()
{

}

bool House::houseIsHitting(){
    if (getTotal() <= 16) //house hits if total is less than or equal to 16
        return true;
    else
        return false;
}

void House::flipFirstCard(){
    cards.at(0).flip();
}

House::~House(){

}
