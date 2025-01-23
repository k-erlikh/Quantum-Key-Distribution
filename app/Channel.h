#include <stdio.h>
#include <deque>

#ifndef CHANNEL_H
#define CHANNEL_H

using namespace std;

class Channel{

    public:
        Channel();
        deque<char> buffer;
    
    protected:
        void push(char bit);
        void pop();
};

#endif