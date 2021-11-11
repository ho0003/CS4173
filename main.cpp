#include "blockchain.h"
#include <time.h> 
// #include <unistd.h> to sleep in unix
#include <Windows.h> // to use sleep in windows 


void wait()
{
    Sleep(5000);
    return;
}


int main() 
{
    Blockchain bChain = Blockchain();
    
    for (int block = 1; block < 50; block++)
    {
        cout << "Mining block " << block << " ..." << endl;
        wait(); 
        bChain.addBlock(Block(block, "Block Data"));
        cout << "\n";
    }

    /*
    cout << "Mining block 1..." << endl;
    bChain.addBlock(Block(1, "Block 1 Data"));

    cout << "Mining block 2..." << endl;
    bChain.addBlock(Block(2, "Block 2 Data"));

    cout << "Mining block 3..." << endl;
    bChain.addBlock(Block(3, "Block 3 Data"));

    cout << "Mining block 4..." << endl;
    bChain.addBlock(Block(4, "Block 4 Data"));

    cout << "Mining block 5..." << endl;
    bChain.addBlock(Block(5, "Block 5 Data"));

    cout << "Mining block 6..." << endl;
    bChain.addBlock(Block(6, "Block 6 Data")); */

    return 0;
}