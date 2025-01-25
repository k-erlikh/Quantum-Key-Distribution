#include "Channel.h"
#include "Bases.h"
#include <stdio.h>
#include <iostream>
#include <vector>
#include <bits/stdc++.h>

#ifndef USER_H
#define USER_H

using namespace std;

class User{

    public:
        User();
        vector<Bases> bases;
        vector<int> key;
        vector<int> sifted_key;
        void print_key();
        void print_bases();

    protected:
        void pick_base(int bit_length);
        void sift_key(vector<Bases> base_1, vector<Bases> base_2);
        
};

#endif