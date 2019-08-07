#include <iostream>
#include "libconsensus/consensus.h"
#include "libencryption/cryption.h"
#include "libnetwork/network.h"

using namespace std;
using namespace dev::consensus;
using namespace dev::cryption;
using namespace dev::network;

int main(){
    Consensus cs = Consensus(1,2);
    Cryption cp = Cryption(5,10);
    Network nt = Network("this is a message");
    cout << "this is hello world"
            "there is no problem to write in this way"
        << endl;
    
    int dvd = cs.divide(100,99);

    cout << dvd <<endl;

    return 0;
}