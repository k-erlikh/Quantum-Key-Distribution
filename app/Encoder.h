#include "User.h"
#include <vector>

#ifndef ENCODER_H
#define ENCODER_H

using namespace std;

class Encoder : public User{

    public:
        Encoder(string name, int bit_length);

    private:
        int bit_length;
        vector<int> encoded_message;     

};

#endif