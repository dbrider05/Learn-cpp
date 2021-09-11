#include<iostream>

using namespace std;

int maximum(int a, int b, int c) {
    if(a>c){
        if(a>b)
            return a;
        else return b;
    }
    else {
        if(c>b)
            return c;
        else return b;
    }
}

int minimum(int a, int b, int c) {
    if(a<b){
        if(a<c)
            return a;
        else return c;
    }
    else {
        if(b<c)
            return b;
        else return c;
    }
}

int main() {

    int num1, num2, num3;
    cin>>num1>>num2>>num3;
    cout<<"the maximum is = "<<maximum(num1, num2, num3);
    cout<<" and the minimum is = "<<minimum(num1, num2, num3)<<endl;
    return 0;
}