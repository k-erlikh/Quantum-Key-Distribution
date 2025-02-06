#include "Decoder.h"

Decoder::Decoder(){}

void Decoder::decode_message(Channel &channel){
    for(int i = 0; i < this->bases.size(); i++){
        int photon = channel.pop();
        if (bases[i] == BASE_ZERO){
            if(photon == 0){
                key.push_back(0);
            }
            if(photon == 90){
                key.push_back(1);
            }
        }
        if (bases[i] == BASE_ONE){
            if(photon == 45){
                key.push_back(0);
            }
            if (photon == 135){
                key.push_back(1);
            }
        }
    }
}

