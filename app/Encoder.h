#include "User.h"

#ifndef ENCODER_H
#define ENCODER_H

using namespace std;

class Encoder : public User{

    public:
        Encoder(string name, int bit_length);

    private:
        int bit_length;
        vector<int> encoded_message;
        void encode_message(); 
        void push_message(Channel& channel);    
};

#endif