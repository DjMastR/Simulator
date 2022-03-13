//
// Created by DjMastR on 2022. 03. 12..
//
#include "type.h"

std::ostream& operator<<(std::ostream& os, const cardType a){
    std::string buff = " ";
    std::string mask[typeSize] = {"zero","Ace","two","three","four","five","six","seven","eight","nine","ten","Jack","Queen","King"};
    if(a == 0)
        buff = "ERR";
    else
        for(int i = 1; i < typeSize; i++)
            if(a == i)
                buff = mask[i];
            else
                continue;
    os << buff;
    return os;
}

std::ostream& operator<<(std::ostream& os, const cardColor a){
    std::string buff = " ";
    std::string mask[colorSize] = {"heart","diamond","spade","club"};
    if(a == 0)
        buff = "ERR";
    else
        for(int i = 1; i < colorSize; i++)
            if(a == i)
                buff = mask[i];
            else
                continue;
    os << buff;
    return os;
}