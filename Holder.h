//
// Created by DjMastR on 2022. 03. 11..
//

#ifndef SZIM_HOLDER_H
#define SZIM_HOLDER_H
#include <list>
#include "nft.h"

class Holder {
private:
    static long long unsigned nextID;
    long long unsigned ID;
    double eth;
    double magic;
    std::list<NFT> invetory;
    double token;
public:
    explicit Holder(double ethp = 0, double magicp = 0, double tokenp = 0);
    Holder(std::string FileName);
    Holder(const Holder& holder);
    ~Holder();

    void setETH(double param);
    void setMagic(double param);
    void setToken(double param);

    long long unsigned getID() const;
    double getETH() const;
    double getMagic() const;
    double getToken() const;

    void addNFT(const NFT& param);
    void removeNFT(const NFT& param);
    NFT& findNFT(long long unsigned Id);
    NFT& findNFT(const NFT& nft);

    void display();

    Holder& operator+(const NFT& param);
    Holder& operator-(const NFT& param);
    void operator+=(const NFT& param);
    void operator-=(const NFT&);

};

#endif //SZIM_HOLDER_H
