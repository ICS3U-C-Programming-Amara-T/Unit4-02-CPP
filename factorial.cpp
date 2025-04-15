// Copyright (c) 2025 Amara Tie All rights reserved.
//
// Created by: Amara Tie
// Date: April 14, 2025
// This is a program that dopes loops 

#include <iostream>
#include <string>

int main() {
    // Define variables
    std::string positiveNumberAsString;
    int positiveNumber;

    // Initialize Counter
    int loopCounter = 0;
    int factorialAnswer = 1;

    // Ask user for a positive number
    std::cout << "Enter a whole number: ";
    std::cin >> positiveNumberAsString;

    // Calculate the factorial of a number
    try {
        positiveNumber = std::stoi(positiveNumberAsString);
        if (positiveNumber >= 0) {
            do {
                loopCounter = loopCounter + 1;
                factorialAnswer = factorialAnswer * loopCounter;
                std::cout << "Tracking \n" << loopCounter << " time of the loop.\n"
                          << std::endl;
                // Display Answer
                std::cout << positiveNumber << "! =" << factorialAnswer << std::endl;
            } while (loopCounter < positiveNumber);

        }else {
            std::cout << "Please enter a positive number" << positiveNumber << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "That was not a valid number ";
    }

    }
