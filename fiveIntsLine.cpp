// Copyright (c) 2022 Noah Ouellette All rights reserved.
//
// Created by: Noah Ouellette
// Created on: Jan. 15, 2022
// This program prints out all of the numbers
// from 1000 to 2000 with 5 numbers on each line

#include <iostream>
#include <iomanip>

int main() {
    int counter;

    // Loop that prints and counts from 1000 to 2000
    for (counter = 1000; counter < 2001; counter++) {
        // If the counter minus 1 is divisible by 5 then start new line
        if ((counter + 1) % 5 != 0) {
            std::cout << counter << " ";
        } else {
            std::cout << counter << "\n";
        }
    }
}
