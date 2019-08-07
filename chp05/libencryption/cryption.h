#pragma once;
#include <string>
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
                virtual ~Cryption();
                const string doCryption();
        };
    }
}