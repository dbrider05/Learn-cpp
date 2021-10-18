#include<iostream>

using namespace std;

int getBit(int n, int pos){
    return (n & 1<<pos) != 0;
}

int setBit(int n, int pos){
    return (n | 1<<pos);
}

int clearBit(int n, int pos){
    int mask = ~(1<<pos);
    return n & mask;
}

//clearBit + setBit
int updateBit(int n, int pos, int value){
    int mask = ~(1<<pos);
    return (n & mask) | (value<<pos); 
}

int toggleBit(int n, int pos){
    return n xor (1<<pos);
}


int main(){

    //int num, pos;
    //cin >> num >> pos;
    cout << getBit(5,2) << endl;

    cout << setBit(5,1) << endl;

    cout << clearBit(5,2) << endl;

    cout << updateBit(5,1,1) << endl;

    cout << toggleBit(5,2) << endl;
    return 0;
}