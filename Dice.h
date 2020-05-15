/*
Dice.h
Owen Hoffman
This file contains the dice class
*/

#include <cstdlib>
#include <ctime>
#include <iostream>

#ifndef DICE_H
#define DICE_H

using namespace std;

class Dice {

public:
  Dice(int seed); // sets the seed to userinput

  int rollDice(); // function to perform dice roll

private:
};

#endif