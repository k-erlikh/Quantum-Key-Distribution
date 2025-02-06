#include "Channel.h"
#include "Encoder.h"
#include "Decoder.h"
#include <stdio.h>

#ifndef TEST_H
#define TEST_H

class Test{
    public:
        static void print_regular_test(){
            cout<<"Regular test: Alice and Bob exchange a message with the same bases"<<endl;
            int message_length = 10;
            Channel channel;
            Encoder alice(message_length);
            Decoder bob;

            cout << "Alice bit sequence message:";
            alice.print_key();
            alice.print_bases();
            alice.encode_message();
            alice.push_message(channel);
            cout << "Encoded message in channel: ";
            channel.print_channel();

            bob.recevie_bases(alice.send_bases());
            bob.decode_message(channel);
            cout<< "Bob's decoded message: ";
            bob.print_key();
        }
};

#endif