#include "board.hpp"

void initializeBoard(std::vector<char> &board) {
    std::fill(board.begin(), board.end(), '-');
}

void drawBoard(std::vector<char> const &board) {
    for (int i = 0; i < BOARD_VECTOR_SIZE; i++) {
        std::cout << board[i] << " ";

        if ((i + 1) % BOARD_SIZE == 0) {
            std::cout << std::endl;
        }
    }
}

int getVectorIndex(int const &x, int const &y) {
    int i = x * BOARD_SIZE + y;

    if (i < 0 || i > (BOARD_VECTOR_SIZE - 1)) {
        i = -1;
    }

    return i;
}

void updateBoard(std::vector<char> &board, int const &x, int const &y, char const &symbol) {
    int const index = getVectorIndex(x, y);
    char &cell = board.at(index);

    if (cell == '-') {
        cell = symbol;
    }
}

bool isWonHorizontally(std::vector<char> const &board, int const &x, int const &y) {
    int const i = getVectorIndex(x, y);

    int a = getVectorIndex(x - 1, y);
    int b = getVectorIndex(x + 1, y);

    if (a == -1) {
        a = getVectorIndex(x + 2, y);
    }
    else if (b == -1) {
        b = getVectorIndex(x - 2, y);
    }

    if (board[a] == board[i] && board[b] == board[i]) {
        return true;
    }
    
    return false;
}

bool isWonVertically(std::vector<char> const &board, int const &x, int const &y) {
    int const i = getVectorIndex(x, y);

    int a = getVectorIndex(x, y - 1);
    int b = getVectorIndex(x, y + 1);

    if (a == -1) {
        a = getVectorIndex(x, y + 2);
    }
    else if (b == -1) {
        b = getVectorIndex(x, y - 2);
    }

    if (board[a] == board[i] && board[b] == board[i]) {
        return true;
    }
    
    return false;
}

bool isWonDiagonally(std::vector<char> const &board, int const &x, int const &y) {
    int const i = getVectorIndex(x, y);

    int a = getVectorIndex(x - 1, y - 1);
    int b = getVectorIndex(x + 1, y + 1);

    if (a == -1) {
        a = getVectorIndex(x + 2, y + 2);
    }
    else if (b == -1) {
        b = getVectorIndex(x - 2, y - 2);
    }

    if (board[a] == board[i] && board[b] == board[i]) {
        return true;
    }
    
    return false;
}

bool isWon(std::vector<char> const &board, int const &x, int const &y) {
    return (
        isWonHorizontally(board, x, y) ||
        isWonVertically(board, x, y) ||
        isWonDiagonally(board, x, y)
    );
}
