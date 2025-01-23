#include "User.h"

User::User(string name):name(name){}

void User::pick_bases(int bit_length){
    for(int i = 0; i < bit_length; i++){
        this->base[i] = rand() % 5;
    }
}

void User::sift_key(vector<char> base_1, vector<char> base_2){
    
}
