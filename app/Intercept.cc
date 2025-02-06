#include "Intercept.h"

Intercept::Intercept(int message_length): bit_length(message_length){
    srand(time(0));
        for(int i = 0; i < bit_length; i ++){
            key.push_back(rand() % 2);
        }
    pick_base(bit_length);
}

void Intercept::intercept_resend(Channel &channel){
    
}