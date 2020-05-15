/*
Player.cpp
Owen Hoffman
This file contains all of the player functions.
As well as the console output and input
*/
#include <cstdlib>
#include <iomanip>
#include <iostream>

#include "Beetle.h"
#include "Dice.h"
#include "Player.h"

using namespace std;

void Player::userEntry() {
  cout << "Player one please enter your name: ";
  cin >> name1;
  cout << "Now please enter a starting seed: ";
  cin >> seed1;
  cout << "Player two please enter your name: ";
  cin >> name2;
  cout << "Now please enter a starting seed: ";
  cin >> seed2;
  cout << "Player three please enter your name: ";
  cin >> name3;
  cout << "Now please enter a starting seed: ";
  cin >> seed3;
  cout << "Player four please enter your name: ";
  cin >> name4;
  cout << "Now please enter a starting seed: ";
  cin >> seed4;
  cout << endl;
}

void Player::playGame() { // plays different instances of same game
  Beetle run;
  Beetle run2;
  Beetle run3;
  Beetle run4;

  player1 = run.buildBeetle(seed1);
  player2 = run2.buildBeetle(seed2);
  player3 = run3.buildBeetle(seed3);
  player4 = run4.buildBeetle(seed4);
}

void Player::displayResults() {

  cout << "Seed" << setw(10) << "Player" << setw(10) << "Turns" << endl;

  cout << seed1 << setw(10) << name1 << setw(10) << player1 << endl;
  cout << seed2 << setw(10) << name2 << setw(10) << player2 << endl;
  cout << seed3 << setw(10) << name3 << setw(10) << player3 << endl;
  cout << seed4 << setw(10) << name4 << setw(10) << player4 << endl;
}

void Player::playAll() { // the one function that executes them all.
  userEntry();
  playGame();
  displayResults();
}