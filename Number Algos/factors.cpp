#include<iostream>

using namespace std;

int main() {

    int num;
    cin>>num;
    cout<<"Factors of "<<num<<" are:\n";
    for(int i=1; i<=num; i++){

        if(num % i == 0){
            cout<<i<<endl;
        }


    }
    return 0;
}