#include "User.h"
#ifndef INTERCEPT_H
#define INTERCEPT_H

class Intercept: public User{

    public:
        Intercept(int message_length);
        void intercept_resend(Channel& channel);

    private: 
        int bit_length;
    
};

#endif