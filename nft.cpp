//
// Created by DjMastR on 2022. 03. 11..
//

#include "nft.h"
#include "iostream"

NFT::NFT(const cardType type_p, const  cardColor color_p, const unsigned artID_p) {
    ID = nextID;
    nextID++;
    artID = artID_p;
    type = type_p;
    color = color_p;

}

NFT::NFT(cardType type_p, int color_p, unsigned artID_p){
    ID = nextID;
    nextID++;
    artID = artID_p;
    type = type_p;
    color = (cardColor)color_p;
}

NFT::NFT(int type_p, cardColor color_p, unsigned artID_p){
    ID = nextID;
    nextID++;
    artID = artID_p;
    type = (cardType)type_p;
    color = color_p;
}

NFT::NFT(int type_p, int color_p, unsigned artID_p){
    ID = nextID;
    nextID++;
    artID = artID_p;
    type = (cardType)type_p;
    color = (cardColor)color_p;
}

NFT::NFT(const NFT &nft1) {
    ID = nft1.getID();
    artID = nft1.getArtID();
    type = nft1.getType();
    color = nft1.getColor();
}

NFT::~NFT() {
    ID = 0;
}

long long unsigned NFT::getID() const{
    return ID;
}

unsigned NFT::getArtID() const {
    return artID;
}

cardType NFT::getType() const {
    return type;
}

cardColor NFT::getColor() const {
    return color;
}

bool NFT::operator==(const NFT &param) {
    if(this->getID() == param.getID())
        return true;
    return false;
}


std::ostream &operator<<(std::ostream &os, const NFT &other) {
    os << "ID: " << other.getID() << std::endl << "Art ID: " << other.getArtID() << std::endl;
    os << other.getType() << " of " << other.getColor() << "s" << std::endl;
    return os;
}
