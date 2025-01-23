#include "User.h"
#include "Channel.h"

#ifndef DECODER_H
#define DECODER_H

class Decoder : public User{

    public:
        Decoder(string name);
        
    private:
        void decode_message(Channel& channel);

};

#endif