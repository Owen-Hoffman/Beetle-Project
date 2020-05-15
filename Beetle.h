/*
Beetle.h
Owen Hoffman
This file contains the beetle class
*/

#include <cstdlib>
#include <ctime>
#include <iostream>

#ifndef BEETLE_H
#define BEETLE_H

using namespace std;

class Beetle {

public:
  int rollnumber;

  void addPiece(int piece); // adds to body, head, ect
  void resetBeetle(int exempt1, int exempt2, int exempt3,int exempt4); // resets pieces if prior conditions haven't been met
  bool isDone();    // checks is the game has finished
  int buildBeetle(int playerSeed); // assembles the beetle: uses all prior member functions

private:
  int body = 0;     // 6
  int head = 0;     // 5
  int wings = 0;    // 4
  int legs = 0;     // 3
  int antennas = 0; // 2
  int eyes = 0;     // 1
};

#endif