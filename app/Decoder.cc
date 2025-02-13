#include "Decoder.h"

Decoder::Decoder(){}

void Decoder::decode_message(Channel &channel){
    srand(time(0)+1);
    for(int i = 0; i < bases.size(); i++){
        int photon = channel.pop();
        if (bases[i] == BASE_ZERO){
            if(photon == 0){
                key.push_back(0);
            }
            else if(photon == 90){
                key.push_back(1);
            }
            else{
                key.push_back(rand() % 2);
            }
        }
        if (bases[i] == BASE_ONE){
            if(photon == 45){
                key.push_back(0);
            }
            else if (photon == 135){
                key.push_back(1);
            }
            else{
                key.push_back(rand() % 2);
            }
        }
    }
}

