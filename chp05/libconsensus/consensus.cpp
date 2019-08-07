#include "consensus.h"
#include <iostream>
using namespace std;
using namespace dev::consensus;

const int Consensus::sum(){
    int val = a+b;
    return val;
}

const int Consensus::divide(int x,int y){
    int val = x-y;
    return val;
}

Consensus::~Consensus(){
   cout << "nothing to do";
}