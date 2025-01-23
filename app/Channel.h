#include <stdio.h>
#include <deque>

#ifndef CHANNEL_H
#define CHANNEL_H

using namespace std;

class Channel{

    public:
        Channel();
        deque<int> buffer;
        void push(int bit);
        void pop();
        
};

#endif