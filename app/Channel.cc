#include "Channel.h"

Channel::Channel(){}

void Channel::push(int bit){
    this->buffer.push_back(bit);
}

int Channel::pop(){
    int photon = this->buffer.front();
    this->buffer.pop_front();
    return photon;
}

void Channel::print_channel(){
    for(int i:this->buffer){
        std::cout<<i<<" ";
    }
    std::cout<<endl;
}

bool Channel::is_empty(){
    return this->buffer.empty();
}