// tema piscinaa.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main() {
    int varsta;
    std::cout << "Introduceti varsta: ";
    std::cin >> varsta;

    if (varsta < 7) {
        std::cout << "Admisia este gratis pentru copii sub 7 ani." << std::endl;
    }
    else {
        std::cout << "Admisia costa 30 RON pentru cei cu varsta de 7 ani sau mai mare." << std::endl;
    }

    return 0;
}