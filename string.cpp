#include <iostream>
#include <limits>
#include <string>

void clrcin(){
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int main() {

    std::string name = "";
    char character;

    std::cout << "Enter character: ";
    std::cin >> character;
    clrcin();
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    std::cout << name;

    return 0;
}