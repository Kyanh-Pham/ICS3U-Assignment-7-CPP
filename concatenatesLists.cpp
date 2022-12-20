// Copyright (c) 2022 Kyanh Pham
//
// Created by: Kyanh Pham
// Created on: Dec 2022
// This program concatenates two lists

#include <array>
#include <iostream>
#include <string>

template <size_t N>
std::array<std::string, 10> concatenatesLists(std::array<std::string, N> list1,
    std::array<std::string, N> list2) {
    std::string aSingleItem;
    std::array<std::string, 10> concatenatedLists;

    for (std::string aSingleItem : list1) {
        std::string list1[5] = aSingleItem;
    }
    for (int items = 0; items < 10; items++) {
        concatenatedLists[items] = list1;
        list1++;
    }
    return concatenatedLists;
}

int main() {
    // this function generates the random numbers

    std::string firstList[5];
    std::string secondList[5];
    std::string item;
    std::string combinedLists[10];

    for (int counter = 0; counter < 5; counter++) {
        std::cout << "Item" << counter + 1 << ": " << std::endl;
        std::cin >> item;
        firstList[counter] = item;
    }
    for (int counter = 0; counter < 5; counter++) {
        std::cout << "Item" << counter + 1 << ": " << std::endl;
        std::cin >> item;
        secondList[counter] = item;
    }
    // calls function
    combinedLists = concatenatesLists(firstList, secondList);
    std::cout << "" << std::endl;
    std::cout << "Here is your combined list: " << std::endl;
    std::cout << "" << combinedLists << "" << std::endl;

    std::cout << "\nDone." << std::endl;
}
