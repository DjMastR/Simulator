//
// Created by DjMastR on 2022. 03. 11..
//
#include "exception"
#include "Holder.h"

Holder::Holder(const double ethp, const double magicp, const double tokenp) {
    ID = nextID++;
    if(ethp < 0)
        throw(std::invalid_argument("Negative eth"));
    if(magicp < 0)
        throw(std::invalid_argument("Negative magic"));
    if(tokenp < 0)
        throw(std::invalid_argument("Negative token"));

    eth = ethp;
    magic = magicp;
    token =tokenp;
}

Holder::Holder(const Holder &holder) {
    ID = holder.getID();
    eth = holder.getETH();
    magic = holder.getMagic();
    token = holder.getToken();
}

void Holder::setETH(double param){
    if(param < 0)
        throw(std::invalid_argument("Negative parameter"));
    eth = param;
}

void Holder::setMagic(double param){
    if(param < 0)
        throw(std::invalid_argument("Negative parameter"));
    magic = param;
}

void Holder::setToken(double param){
    if(param < 0)
        throw(std::invalid_argument("Negative parameter"));
    token = param;
}

long long unsigned Holder::getID() const{
    return ID;
}

double Holder::getETH() const{
    return eth;
}

double Holder::getMagic() const{
    return magic;
}

double Holder::getToken() const{
    return token;
}

void Holder::addNFT(const NFT &param) {
    invetory.insert(invetory.begin(), 1, param);
}

void Holder::removeNFT(const NFT& param){
    invetory.remove(param);
}

NFT& Holder::findNFT(const long long unsigned Id){
    for(auto it = invetory.begin(); it != invetory.end(); it++)
        if(it->getID() == Id)
            return *it;
    throw(std::range_error("No item found with matching ID"));
}

NFT& Holder::findNFT(const NFT& nft){
    return findNFT(nft.getID());
}

void Holder::display() {
    std::list<NFT>::iterator it;
    int k = 0;
    for(it = invetory.begin(); it != invetory.end(); it++){
        k++;
        std::cout << *it << std::endl;
    }
    std::cout << std::endl << std::endl << "Number of NFTs: " << k << std::endl;
}

Holder::~Holder() {
    invetory.clear();
}

Holder& Holder::operator+(const NFT& param){
    this->addNFT(param);
    return *this;
}

void Holder::operator+=(const NFT& param){
    *this + param;
}

Holder &Holder::operator-(const NFT& param) {
    this->removeNFT(param);
    return *this;
}

void Holder::operator-=(const NFT &param) {
    *this - param;
}
