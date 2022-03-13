//
// Created by DjMastR on 2022. 03. 11..
//

#ifndef SZIM_TYPE_H
#define SZIM_TYPE_H

#include "iostream"
#define typeSize 14
#define colorSize 4

enum cardType {
    zero,
    Ace,
    two,
    three,
    four,
    five,
    six,
    seven,
    eight,
    nine,
    ten,
    Jack,
    Queen,
    King
};


enum cardColor {
    heart,
    diamond,
    spade,
    club
};

std::ostream& operator<<(std::ostream& os, cardType a);

std::ostream& operator<<(std::ostream& os, cardColor b);
#endif //SZIM_TYPE_H
