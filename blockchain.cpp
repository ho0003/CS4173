#include "Blockchain.h"


void Blockchain::addBlock(Block bNew) 
{
    bNew.sPrevHash = getLastBlock().getHash();
    bNew.mineBlock(_nDifficulty);
    _vChain.push_back(bNew);
}


Block Blockchain::getLastBlock() const 
{
    return _vChain.back();
}

Blockchain::Blockchain() 
{
    _vChain.emplace_back(Block(0, "Genesis Block"));
    _nDifficulty = 6;
}

