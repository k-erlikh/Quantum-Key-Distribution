#include "User.h"

#ifndef ENCODER_H
#define ENCODER_H

using namespace std;

class Encoder : public User{

    public:
        Encoder(int bit_length);
        void encode_message(); 
        void push_message(Channel& channel);

    private:
        int bit_length;
        vector<int> encoded_message;
};

#endif