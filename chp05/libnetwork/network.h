#pragma once
#include <string>
#include <iostream>
using namespace std;

namespace dev{
    namespace network{
        class Network{
            string msg;

            public:
                Network(string msg):msg(msg){
                }
                virtual ~Network(){
                    cout << "network nothing to do"
                }
                void transfer();
                const string accpept(string message);
        };
    }
}