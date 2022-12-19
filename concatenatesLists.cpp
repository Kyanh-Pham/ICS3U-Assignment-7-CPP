// Copyright (c) 2022 Kyanh Pham
//
// Created by: Kyanh Pham
// Created on: Dec 2022
// This program concatenates two lists

#include <array>
#include <iostream>

template <size_t N>
std::string concatenatesLists(list1, list2) {
    int aSingleItem;
    std::string concatenatedLists[10];
    std::string list1[5];
    std::string list2[5]

    for (int counter = 0; counter < list1.size(); counter++) {
        list1[] = aSingleItem     }
        concatenatedLists = list1;
        return concatenatedLists;
}

int main() {
    // this function generates the random numbers

    std::string firstList[5];
    std::string secondList[5];
    std::string combinedLists[10];
    int item;

    for (int counter = 1; counter == 6; counter++) {
        std::cout << "Item" << counter << ": " << std::endl;
        std::cin >> item;
        firstList[counter] = item;
    }
    for (int counter = 1; counter == 6; counter++) {
        std::cout << "Item" << counter << ": " << std::endl;
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
