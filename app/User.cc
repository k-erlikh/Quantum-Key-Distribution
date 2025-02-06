#include "User.h"

User::User(){}

void User::pick_base(int bit_length){
    srand(time(0)+1);
    for(int i = 0; i < bit_length; i++){
        bases.push_back(static_cast<Bases>(rand() % 2));
    }
}

void User::sift_key(vector<Bases> base_1, vector<Bases> base_2){
    
}

vector<Bases> User::send_bases(){
    return bases;
}

void User::recevie_bases(vector<Bases> bases){
    this->bases = bases;
}

void User::print_key(){
    for(int bit:this->key){
        cout<< bit << " ";
    }
    cout<<endl;
}

void User::print_bases(){
    cout<< "Bases: ";
    for(Bases base: this->bases){
        cout<< base <<" ";
    }
    cout<< endl;
}