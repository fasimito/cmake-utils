#pragma once

namespace dev{
    namespace consensus{
        class Consensus{
            private:
                int a;
                int b;
            public:
                Consensus(int a, int b):a(a),b(b){
                }
                virtual ~Consensus();
                const int getA(){
                    return a;
                }
                const int getB(){
                    return b;
                }
                const int sum();
                const int divide(int x,int y);
        };
    }
}