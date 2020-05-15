/*
Player.h
Owen Hoffman
This file contains the player class
*/

#include <cstdlib>
#include <ctime>
#include <iostream>

#ifndef PLAYER_H
#define PLAYER_H

using namespace std;

class Player {
public:
  void userEntry();      // the function the accepts the users names and seeds
  void playGame();       // the function the runs the game for the players
  void displayResults(); // the function that formats and performs the cout
  void playAll();        // the function called in main

private:
  int seed1; // each players inputted seeds
  int seed2;
  int seed3;
  int seed4;

  string name1; // each players inputted names
  string name2;
  string name3;
  string name4;

  int player1; // each players game instance
  int player2;
  int player3;
  int player4;
};

#endif