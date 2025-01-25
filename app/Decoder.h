#include "User.h"
#include "Channel.h"
#include "Encoder.h"

#ifndef DECODER_H
#define DECODER_H

class Decoder : public User{

    public:
        Decoder();
        void get_encoder_bases(Encoder& encoder);
        
    private:
        void decode_message(Channel& channel);
};

#endif