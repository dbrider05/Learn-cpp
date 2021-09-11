#include<iostream>

using namespace std;

void isOdd(int num) {
    if(num % 2 == 0){
        cout<<"the number is even";
        return;
    }
    cout<<"The number is odd";
}

int main() {

    int n;
    cin>>n;
    isOdd(n);
    return 0;
} 