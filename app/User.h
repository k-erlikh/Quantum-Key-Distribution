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
        void print_key();
        void print_bases();
        void pick_base(int bit_length, int f = 0);
        void sift_key(vector<Bases> base_1, vector<Bases> base_2);
        vector<Bases> send_bases();
        void recevie_bases(vector<Bases> bases);

    protected:
        vector<Bases> bases;
        vector<int> key;
        vector<int> sifted_key;   
};

#endif