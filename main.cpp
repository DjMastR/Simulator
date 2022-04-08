#include <iostream>
#include "type.h"
#include "nft.h"
#include "Holder.h"

unsigned long long NFT::nextID = 1;

unsigned long long Holder::nextID = 1;

void splitter(){
    std::cout << std::endl;
    for(int i = 0; i <100; i++)
        std::cout << "-";
    std::cout << std::endl;
    std::cout << std::endl;
}

int main() {


    NFT pelda1(King, diamond, 3);
    NFT pelda2(10, spade, 2);

    Holder Bela(10, 0, 0);
    Bela += pelda1;
    Bela += pelda2;

    //std::cout << Bela.findNFT(pelda2) << std::endl;
    Bela.display();
    splitter();
    Bela -= pelda1;
    Bela.display();
    return 0;
}
