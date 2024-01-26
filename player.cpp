/** =======================================================================
 * Author: Andreea Cobzaru
 * Date: 5 Jun, 2022
 *
 * Purpose: Final Project; Source file for player class - child of generic player
 *
 * Course:   Programming 25
 * Teacher:  Ms. Deepeka Dalal
* ========================================================================*/

#include "player.h"

Player::Player(std::string n) :GenericPlayer()
{
    name = n;
}

std::string Player::getName(){
    return name;
}

bool Player::isHitting(){
    std::cout << name << ", do you want a hit? (Y/N): ";
    std::string ans;
    do {
        std::cin >> ans;
        if (ans == "Y" || ans == "y" || ans == "N" || ans == "n"){
            break;
        }
        else{
            std::cout << "Invalid input. Try again: ";
        }

    } while(true);

    if (ans == "y" || ans == "Y")
        return true;
    else
        return false;

}

void Player::lose(){
    std::cout << name << " loses!" << std::endl;
}

void Player::win(){
    std::cout << name << " wins!" << std::endl;
}

void Player::push(){
    std::cout << name << " pushes!" << std::endl;
}

Player::~Player(){

}
