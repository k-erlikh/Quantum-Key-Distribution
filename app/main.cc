#include <stdio.h>
#include <iostream>
#include "Channel.h"
#include "Encoder.h"
#include "Decoder.h"

using namespace std;

int main(){
    
    cout<<"Testing"<<endl;

    Channel channel;
    Encoder alice(10);
    Decoder bob;

    cout << "Alice bit sequence message:";
    alice.print_key();
    alice.print_bases();
    alice.encode_message();
    alice.push_message(channel);
    channel.print_channel();

    
    return 0;
}