#include "Test.h"

void Test::print_regular_test(){
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
    cout << "Alice's encoded message in channel: ";
    channel.print_channel();

    bob.recevie_bases(alice.send_bases());
    bob.decode_message(channel);
    cout<< "Bob's decoded message: ";
    bob.print_key();
}

void Test::print_intercept_resend()
{
    cout<<"Intercept and resend test: Alice and bob attempt to exchange a message, Eve intercepts"<<endl;
    int message_length = 10;
    Channel channel;
    Encoder alice(message_length);
    Decoder bob;
    Intercept eve(message_length);

    cout << "Alice bit sequence message:";
    alice.encode_message();
    alice.push_message(channel);
    alice.print_bases();
    cout << "Alice's encoded message in channel: ";
    channel.print_channel();

    eve.intercept_resend(channel);
    cout << "Eve's bit sequence message:";
    eve.print_key();
    cout << "Eve's encoded message in channel: ";
    channel.print_channel();

    bob.recevie_bases(alice.send_bases());
    bob.decode_message(channel);
    cout<< "Bob's decoded message: ";
    bob.print_key();
}
