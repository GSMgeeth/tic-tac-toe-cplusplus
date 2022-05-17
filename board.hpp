#include <iostream>
#include <vector>
#include <algorithm>

int const BOARD_SIZE = 3;

void initializeBoard(std::vector<char> &board);
void drawBoard(std::vector<char> const &board);
void updateBoard(std::vector<char> &board, int const &x, int const &y, char const &symbol);
bool isWon(std::vector<char> const &board, int const &x, int const &y);
