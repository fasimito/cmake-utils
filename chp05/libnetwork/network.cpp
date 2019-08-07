#include "network.h"
#include <iostream>

namespace dev{
    namespace network{
        const string Network::accpept(string message){
            return message;
        }
        void Network::transfer(){
            cout<<"the message is :"
                <<msg<<endl;
        }
    }
}