#include<bits/stdc++.h>

using namespace std;

bool check(int num1, int num2, int num3) {

    int a = max(num1,max(num2,num3));
    int b,c;
    if(a==num1){
        b = num2;
        c = num3;
    }
    else if(a == num2) {
        b = num1;
        c = num3;
    }
    else {
        b = num1;
        c = num2;
    }
    if(a*a == b*b + c*c)
        return true;
    else return false;
}

int main() {

    int num1,num2,num3;
    cin>>num1>>num2>>num3;
    if(check(num1, num2, num3))
        cout<<"Its a pythagorean triplet";
    else cout<<"Its not a pythogorean triplet";
    return 0;

}