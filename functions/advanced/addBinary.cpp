#include<iostream>
// not passing testcase 10101 11011, it gives 11 instead of 110000 because the int represent '01' as '1'
// So instead use string as return type for ans.

using namespace std;

int reverse(int num){
    int ans = 0;
    while(num>0){
        int lastDigit = num % 10;
        ans = ans*10 + lastDigit;
        num /= 10; 
    }
    return ans;
}

int addBinary(int a, int b) {

    int ans = 0, prevCarry = 0;
    while(a>0 && b>0){
        if(a%2==0 && b%2==0){
            ans = ans*10 + prevCarry;
            prevCarry = 0;
        }
        else if((a%2==0 && b%2==1) || (a%2==1 && b%2==0)){
            if(prevCarry == 1){
                ans = ans*10 + 0;
                prevCarry = 1;
            }
            else {
                ans = ans*10 + 1;
                prevCarry = 0;
            }
        }
        else{
            ans = ans*10 + prevCarry;
            prevCarry = 1;
        }
        a /= 10;
        b /= 10;
    }

    while(a>0){
        if(prevCarry == 1){
            if(a%2==1){
                ans = ans*10 + 0;
                prevCarry = 1;
            }
            else {
                ans = ans*10 + 1;
                prevCarry = 0;
            }
        }
        else 
            ans = ans*10 + (a%2);
        a /= 10;
    }

    while(b>0){
        if(prevCarry == 1){
            if(b%2==1){
                ans = ans*10 + 0;
                prevCarry = 1;
            }
            else {
                ans = ans*10 + 1;
                prevCarry = 0;
            }
        }
        else 
            ans = ans*10 + (b%2);
        b /= 10;
    }
    if(prevCarry == 1)
        ans = ans*10 + 1;
    ans = reverse(ans);
    return ans;
}

int main() {

    int a,b;
    cin>>a>>b;
    cout<<addBinary(a, b);
    return 0;
}