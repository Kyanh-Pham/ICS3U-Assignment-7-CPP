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

    for (size_t counter = 0; counter < list1.size(); counter++) {
        list1[counter] = aSingleItem;
    }
    for (int counter = 0; counter < 10; counter++) {
        concatenatedLists[counter] = list1[counter];
    }
    return concatenatedLists;
}

int main() {
    // this function generates the random numbers

    std::array<std::string, 5> firstList;
    std::array<std::string, 5>  secondList;
    std::string item;
    std::array<std::string, 10> combinedLists;

    for (int counter = 0; counter < 5; counter++) {
        std::cout << "Item" << counter + 1 << ": ";
        std::cin >> item;
        firstList[counter] = item;
    }
    for (int counter = 0; counter < 5; counter++) {
        std::cout << "Item" << counter + 1 << ": ";
        std::cin >> item;
        secondList[counter] = item;
    }
    // calls function
    combinedLists = concatenatesLists(firstList, secondList);
    std::cout << "" << std::endl;
    std::cout << "Here is your combined list: " << std::endl;
    for (int counter = 0; counter < 10; counter++) {
        std::cout << combinedLists[counter] << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
