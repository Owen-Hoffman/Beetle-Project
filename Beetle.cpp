/*
Beetle.cpp
Owen Hoffman
This file contains the functions that use the beetle class.
used to assemble the beetle
*/
#include <cassert>
#include <ctime>
#include <iostream>

#include "Beetle.h"
#include "Dice.h"

using namespace std;

void Beetle::addPiece(int piece) { // adds pieces to beetle
  if (piece == 6) {
    body += 1;
  }
  if (piece == 5) {
    head += 1;
  }
  if (piece == 4) {
    wings += 1;
  }
  if (piece == 3) {
    legs += 1;
  }
  if (piece == 2) {
    antennas += 1;
  }
  if (piece == 1) {
    eyes += 1;
  }
}

void Beetle::resetBeetle(int exempt1, int exempt2, int exempt3, int exempt4) {
  // clears beetle parts so the player can't add pieces before they are supposed
  // too.

  if (body != exempt1) {
    body = 0;
  }
  if (head != exempt2) {
    head = 0;
  }
  if (wings != exempt3) {
    wings = 0;
  }
  if (legs != exempt4) {
    legs = 0;
  }

  antennas = 0;
  eyes = 0;
}

bool Beetle::isDone() { // checks to see if conditions are met
  if (body >= 1 && head >= 1 && wings >= 2 && legs >= 6 && antennas >= 2 &&
      eyes >= 2) {
    return true;
  } else {
    return false;
  }
}

int Beetle::buildBeetle(int playerSeed) {
  // returns rollnumber. all other ints discarded.
  Dice roll(playerSeed);
  int piece = 0;
  rollnumber = 0;

  while (isDone() == false) {
    piece = roll.rollDice();
    addPiece(piece);
    rollnumber++; // keeps track of how many rolls

    if (body == 0) {
      resetBeetle(body, 0, 0, 0);
    }
    if (head == 0) {
      resetBeetle(body, head, legs, wings);
    }
  }

  return rollnumber;
}
