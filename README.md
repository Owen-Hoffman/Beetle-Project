# Beetle Dice Game

This project is a simulation of the "Beetle" dice game.
This project was created as part of Professor Fosters CPTR 142 class at Walla Walla University.

> Beetle is a British party game in which one draws a beetle in parts. The game may be played solely with pen, paper and a die or using a commercial game set, some of which contain custom scorepads and dice and others which contain pieces which snap together to make a beetle/bug. It is sometimes called Cooties or Bugs. The game is entirely based on random die rolls, with no skill involved.

> ### Playing

> The part drawn is decided by the roll of a die. The traditional rolls are:

> * 6 is for the body, of which there is one.
> * 5 is for the head, of which there is one.
> * 4 is for the wings, of which there are two.
> * 3 is for a leg, of which there are six.
> * 2 is for an antenna, of which there are two.
> * 1 is for an eye, of which there are two.

> It is necessary to roll the correct number for the body before any other part may be drawn. To the body, one may attach the head, legs or wings, but the head must precede the antenna and eyes. The first player to draw all the requisite parts is the winner.

-- From [wikipedia.org](https://en.wikipedia.org/wiki/Beetle_(game)#/media/File:Beetle_Drive_Beetle.JPG)

This program will simulate a game by creating a dice and some players, rolling the dice once for each player in turn, adding a body part to the beetle if appropriate, checking to see if the beetle is complete, and reporting a winner when someone has a complete beetle.

![image of beetle](https://upload.wikimedia.org/wikipedia/commons/thumb/d/df/Beetle_Drive_Beetle.JPG/339px-Beetle_Drive_Beetle.JPG) 

Image by [TheRehn](https://commons.wikimedia.org/w/index.php?curid=3361932) - Own work, GFDL

## Solution Specifications

0. Your program will simulate the actions by all players in an entire game, from start to finish, and report the game's outcome to the console. 
0. Your program must be divided into classes and functions which perform well-defined and logical sub-tasks for the problem. You may check with your professor or TA about your choice of functions and the parameters and/or return types that they will require.
0. Define a Dice class and instantiate one instance to be shared by all players. Use private member variables and appropriate public functions. Ask the user for a "seed" and use `srand()` in a constructor. Use `rand()` to simulate a dice roll to be returned.
0. Define a Beetle class with private member variables and appropriate public functions. Create one instance of Beetle for each of four players and ask the user for player names.
1. Separate the class definition file from the function implementation file.
1. Create a CPP file with a main() that tests your classes, verifying that the functionality is correct.
0. Create a CPP file to simulate the game. Give each player a turn (one roll) and move on to the next player if the game is not over. When the game ends, report which player won (by name) and how many turns it took to finish the game.
1. A stretch goal: use a vector to allow for a variable number of players (text, section 5.1).


* The expected output is quite simple, just a player's name and the number of turns it took to win.
* The use of a seed allows us to have repeatable "pseudo-random" sequences. If you have four players, then you should get the following results:

Seed | Player | Turns
-----|--------|------
   0 |    3   |  26  
  42 |    1   |  31  
 999 |    2   |  33

## Source Code

- [GitHub](https://github.com/Owen-Hoffman/Beetle-Project)
