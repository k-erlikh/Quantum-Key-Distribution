#include "Channel.h"
#include "Encoder.h"
#include "Decoder.h"
#include "Intercept.h"
#include <stdio.h>

#ifndef TEST_H
#define TEST_H

class Test{
    public:
        static void print_regular_test();
        static void print_intercept_resend();
};

#endif