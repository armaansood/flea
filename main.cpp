#include <iostream>
#include <string>

void PrintPrompt() {
    std::cout << "flea > ";
}

int main(int argc, char** argv) {
    while (true) {
        PrintPrompt();
        std::string input;
        if (!std::getline(std::cin, input) || input == ".exit") {
            return EXIT_SUCCESS;
        }
    }
}