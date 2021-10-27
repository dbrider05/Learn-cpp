#include<iostream>

using namespace std;

void descend(int n){
    if(n==0)
        return;
    cout << n <<endl;
    descend(n-1);
}

int main(){

    int n;
    cin>>n;
    descend(n);
    return 0;
}