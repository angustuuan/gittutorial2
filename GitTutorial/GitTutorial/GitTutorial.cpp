﻿// GitTutorial.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "stdafx.h"
#include <string>
#include <iostream>
using namespace System;
bool Guess(int number) {
    static int target = -1;
    if (target == -1) {
        Random r;
        target = r.Next() % 100 + 1;
    }
    if (number == target)return true;

    return false;
}
int main(array<System::String ^> ^args)
{
    int guess;
    do {
    std::cout << "Choose a number between 1 - 100 :";
    std::cin >> guess;
    } while (!Guess(guess));
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
