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

    cout << "cs output is :" << cs.sum << " the dvd is: " << dvd << endl;
    cout << "cp output is :" << cp.doCryption() << endl;
    cout << "nt output is :" << nt.accpept << endl;

    return 0;
}