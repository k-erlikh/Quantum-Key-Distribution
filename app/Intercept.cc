#include "Intercept.h"
#include <unistd.h>

Intercept::Intercept(int bit_length): bit_length(bit_length){
    pick_base(bit_length, 1);
}

void Intercept::intercept_resend(Channel &channel){
    srand(time(0));
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

    std::map<Bases, std::array<int, 2>> bases_map = {
        {BASE_ZERO, {0, 90}},
        {BASE_ONE, {45, 135}}
    };
    for(int i = 0; i < bit_length; i++){
        intercept_message.push_back(bases_map.at(bases.at(i)).at(key.at(i)));
    }

    for(int bit:intercept_message){
        channel.push(bit);
    }

}