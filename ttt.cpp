/**
 * @file ttt.cpp
 * @author Geeth Sandaru (geeth.gsm@gmail.com)
 * @brief Tic Tac Toe is a two player game.
 * @version 0.1
 * @date 2022-05-16
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>

#include "board.hpp"

// 3x3 board
// assing two symboles for players, one for each.
// iterate to get input from each player. One iteration is for one player.
// get user input as x value and y value for 2D array's indexes. (min 1 1, max 3 3, since it's a 3x3 board).
// place the player's symbol in the correct cell of the board.
// check if the player won the game. if won, show the message and quit. if not, continue to next iteration.

/**
 * Functions:
 * - draw the board
 * - get user input with validations
 * - check the winning status
 * - update the board with player's input
 * 
 * Files:
 * - board.hpp and board.cpp for board related functions (display and update)
 * 
 */

int main() {
    display();
}
