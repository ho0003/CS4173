#include <cstdint>         // This is used to support different integer types 
#include <iostream>

using namespace std; 


class Block 
{
    public:
        
        string sPrevHash;

        Block(uint32_t nIndexIn, const string& sDataIn);
        string getHash();
        
        void mineBlock( uint32_t nDifficulty);

    private:
        
        uint32_t _nIndex;
        int64_t _nNonce;
        string _sData;
        string _sHash;
        time_t _tTime;

    string calculateHash() const;
};
