#include "Channel.h"

Channel::Channel(){}

void Channel::push(int bit){
    this->buffer.push_back(bit);
}

void Channel::pop(){
    this->buffer.pop_front();
}
