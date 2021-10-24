// Copyright (c) 2021 haokai All rights reserved
//
// Created by: Haokai
// Created on: Sept 2021
// This Program calculate maximum number

#include <iostream>
#include <random>
#include <array>

template<size_t N>
int calculatedMaximumNumber(std::array<int, N> calculateMyNumbers) {
    // This function calculate maximum number
    int totalNumber = 0;
    int loopNumberSecond;

    // process
    for (loopNumberSecond = 0;
         loopNumberSecond < calculateMyNumbers.size();
         loopNumberSecond++) {
        // output
        std::cout << "The random number " << loopNumberSecond + 1 << " is "
        << calculateMyNumbers[loopNumberSecond] << std::endl;

        if (calculateMyNumbers[loopNumberSecond] > totalNumber) {
            totalNumber = calculateMyNumbers[loopNumberSecond];
        }
    }

    return totalNumber;
}

int main() {
    // This Program calculate average
    std::array<int, 10> myNumbers;

    int arrSize = sizeof(myNumbers)/sizeof(myNumbers[0]);
    int loopNumberFirst;

    int calculateNumber;
    int maximumNumber;

    // process
    for (loopNumberFirst = 0; loopNumberFirst < 10; loopNumberFirst++) {
        std::random_device rseed;
        std::mt19937 rgen(rseed());
        std::uniform_int_distribution<int> idist(0, 100);
        calculateNumber = idist(rgen);
        myNumbers[loopNumberFirst] = calculateNumber;
    }

    // output
    std::cout << "Here is a list of random numbers:" << std::endl;
    std::cout << "" << std::endl;

    // call functions
    maximumNumber = calculatedMaximumNumber(myNumbers);

    std::cout << "" << std::endl;
    std::cout << "The largest number is: " << maximumNumber << std::endl;

    std::cout << "\nDone" << std::endl;
}
