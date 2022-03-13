//
// Created by DjMastR on 2022. 03. 11..
//

#ifndef SZIM_NFT_H
#define SZIM_NFT_H
#include "type.h"


class NFT {
private:
    static long long unsigned nextID;
    long long unsigned int ID;
    unsigned artID;
    cardType type;
    cardColor color;

public:
    NFT(cardType type_p, cardColor color_p, unsigned artID_p = 0);
    NFT(cardType type_p, int color_p, unsigned artID_p = 0);
    NFT(int type_p, cardColor color_p, unsigned artID_p = 0);
    NFT(int type_p, int color_p, unsigned artID_p = 0);
    NFT(const NFT &nft1);
    ~NFT();

    long long unsigned getID() const;
    unsigned getArtID() const ;
    cardType getType() const;
    cardColor getColor() const;

};

std::ostream& operator<<(std::ostream& os, const NFT& other);

#endif //SZIM_NFT_H
