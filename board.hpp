#include "std_headers.hpp"

int const BOARD_SIZE = 3;
int const BOARD_VECTOR_SIZE = BOARD_SIZE * BOARD_SIZE;

void initializeBoard(std::vector<char> &board);
void initializeBoard(std::vector<char> &board);
void drawBoard(std::vector<char> const &board);
void updateBoard(std::vector<char> &board, int const &x, int const &y, char const &symbol);
bool isWon(std::vector<char> const &board, int const &x, int const &y);
