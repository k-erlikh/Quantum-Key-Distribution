#include "Encoder.h"

Encoder::Encoder(string name, int bit_length):User(name), bit_length(bit_length){
    srand(time(0));
    for(int i = 0; i < bit_length; i ++){
        key.push_back(rand() % 2);
    }
    pick_base(bit_length);
}

void Encoder::encode_message(){
    std::map<Bases, std::array<int, 2>> bases_map = {
        {BASE_ZERO, {0, 90}},
        {BASE_ONE, {45, 135}}
    };
    
    for(int i = 0; i < bit_length; i++){
        if (key.at(i) == 0){
            encoded_message.push_back(bases_map.at((bases.at(i))).at(0));
        }
        if (key.at(i) == 1){
            encoded_message.push_back(bases_map.at((bases.at(i))).at(1));
        }
    }
}

void Encoder::push_message(Channel &channel){
    for(int bit:encoded_message){
        channel.push(bit);
    }
}
