#include <cstdint>
#include <vector>
#include "Block.h"

using namespace std;

class Blockchain {
public:
    Blockchain();

    void addBlock(Block bNew);

private:
    uint32_t _nDifficulty;
    vector<Block> _vChain;

    Block getLastBlock() const;
};