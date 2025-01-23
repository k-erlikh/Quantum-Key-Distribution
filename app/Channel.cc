#include "Channel.h"

Channel::Channel(){}

void Channel::push(char bit){
    this->buffer.push_back(bit);
}

void Channel::pop(){
    this->buffer.pop_front();
}
