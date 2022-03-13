#include <iostream>
#include "type.h"
#include "nft.h"
#include "Holder.h"

unsigned long long NFT::nextID = 1;
unsigned long long Holder::nextID = 1;

int main() {


    NFT pelda1(King, diamond, 3);
    NFT pelda2(10, spade, 2);

    Holder Bela(10, 0, 0);
    Bela.addNFT(pelda1);
    Bela.addNFT(pelda2);

    std::cout << Bela.findNFT(pelda2) << std::endl;

    return 0;
}
