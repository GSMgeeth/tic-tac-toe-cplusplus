#include "player.hpp"

void addPlayer(std::string &name) {
    std::cout << "Name : ";
    std::cin >> name;
}

void addPlayers(std::string &player1, std::string &player2, char &playerSymbol1, char &playerSymbol2) {
    std::cout << "Player 1 infomation" << std::endl;
    addPlayer(player1);
    playerSymbol1 = 'X';

    std::cout << "Player 2 infomation" << std::endl;
    addPlayer(player2);
    playerSymbol2 = 'O';

    std::cout << "Player 1 : " << player1 << " (" << playerSymbol1 << ")" << std::endl;
    std::cout << "Player 2 : " << player2 << " (" << playerSymbol2 << ")" << std::endl;
}

void setPlayerInput(int &x, int &y) {
    while (true) {
        std::cout << "Coordinates in order of x, y separated by a space (ex: 3 2) : ";
        std::cin >> x;
        std::cin >> y;

        std::cout << std::endl;

        if (x < 1 || x > 3) {
            std::cerr << "X value is invalid (min 1, max 3). Please try again!" << std::endl;
        }
        else if (y < 1 || y > 3) {
            std::cerr << "Y value is invalid (min 1, max 3). Please try again!" << std::endl;
        }
        else {
            x -= 1;
            y -= 1;

            break;
        }
    }
}
