#include <stdio.h>
#include <iostream>
#include <vector>
#include <cstdlib>

#ifndef USER_H
#define USER_H

using namespace std;

class User{

    public:
        User(string name);
        string name;
        vector<char> base;
        vector<int> key;
        vector<int> sifted_key;

    protected:
        void pick_bases(int bit_length);
        void sift_key(vector<char> base_1, vector<char> base_2);
};

#endif