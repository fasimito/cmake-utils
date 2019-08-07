#pragma once
#include <string>
#include <iostream>
using namespace std;

namespace dev{
    namespace cryption{
        class Cryption{
            int x;
            int y;
            string results;
            public:
                Cryption(int x, int y):x(x),y(y){
                }
                virtual ~Cryption(){
                    cout<< "crpytion nothing todo";
                }
                const string doCryption();
        };
    }
}