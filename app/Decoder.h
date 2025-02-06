#include "User.h"
#include "Channel.h"
#include "Encoder.h"

#ifndef DECODER_H
#define DECODER_H

class Decoder : public User{

    public:
        Decoder();
        void decode_message(Channel& channel);
};

#endif