#include "Channel.h"

Channel::Channel(){}

void Channel::push(int bit){
    this->buffer.push_back(bit);
}

void Channel::pop(){
    this->buffer.pop_front();
}

void Channel::print_channel(){
    for(int i:this->buffer){
        std::cout<<i<<" ";
    }
    std::cout<<endl;
}
