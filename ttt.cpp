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

#include "board.hpp"
#include "player.hpp"

int main() {
    std::string player1, player2;
    char playerSymbol1, playerSymbol2;
    bool won = false;

    std::vector<char> board(BOARD_VECTOR_SIZE, '-');
    
    addPlayers(player1, player2, playerSymbol1, playerSymbol2);

    std::cout << std::endl;
    drawBoard(board);
    std::cout << std::endl;

    for (int i = 0; i < BOARD_VECTOR_SIZE / 2 + 1; i++)
    {
        int x, y;

        std::cout << "loop index : " << i << std::endl;

        std::cout << player1 << std::endl;
        setPlayerInput(x, y);
        updateBoard(board, x, y, playerSymbol1);
        drawBoard(board);

        if (i > 3) {
            won = isWon(board, x, y);

            if (won) {
                std::cout << player1 << " won the game!" << std::endl;
                break;
            }
        }

        std::cout << player2 << std::endl;
        setPlayerInput(x, y);
        updateBoard(board, x, y, playerSymbol2);
        drawBoard(board);

        if (i > 3) {
            won = isWon(board, x, y);

            if (won) {
                std::cout << player2 << " won the game!" << std::endl;
                break;
            }
        }
    }

    if (!won) {
        std::cout << "No Winners!" << std::endl;
    }
}
