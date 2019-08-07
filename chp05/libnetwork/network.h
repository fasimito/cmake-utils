#pragma once
#include <string>
using namespace std;

namespace dev{
    namespace network{
        class Network{
            string msg;

            public:
                Network(string msg):msg(msg){
                }
                virtual ~Network();
                void transfer();
                const string accpept(string message);
        };
    }
}