#include "User.h"

User::User(string name):name(name){}

void User::pick_base(int bit_length){
    srand(time(0));
    for(int i = 0; i < bit_length; i++){
        bases.push_back(static_cast<Bases>(rand() % 2));
    }
}

void User::sift_key(vector<Bases> base_1, vector<Bases> base_2){
    
}
