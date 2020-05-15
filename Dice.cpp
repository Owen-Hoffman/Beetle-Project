/*
Dice.cpp
Owen Hoffman
This file contains the operational functions for
the dice. Specifically roll and rand
*/
#include <cstdlib>

using namespace std;

#include "Dice.h"

Dice::Dice(int seed) { srand(seed); }

int Dice::rollDice() { return rand() % 6 + 1; }
