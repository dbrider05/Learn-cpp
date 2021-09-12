#include<bits/stdc++.h>

using namespace std;

int binaryToDecimal(int n){

    int ans = 0;
    int x = 1;
    while(n>0){
        int lastDigit = n % 10;
        ans +=  x*lastDigit;
        x *=2;
        n /= 10;
    }    
    return ans;
}

int octalToDecimal(int n){

    int ans = 0;
    int x = 1;
    while(n>0){

        int lastDigit = n % 10;
        ans += lastDigit*x;
        x *= 8;
        n /= 10; 
    }
    return ans;

}

int hexadecimalToDecimal(string s){
    int ans = 0;
    int x = 1;
    int n = s.size();
    for(int i=n-1; i>=0; i--) {
        if(s[i] >= '0' && s[i] <= '9')
            ans += (s[i] - '0')*x; 
        else
            ans += (s[i] - 'A' + 10)*x; 
        x *= 16;
    }
    return ans;

}
int decimalToBinary(int n){
    int ans = 0;
    int x = 1;
    while(x<=n)
        x *= 2;
    x /= 2;
    
    while (x>0){
        int digit = n / x;
        n %= x;
        ans = ans*10 + digit; 
        x /= 2;
    }
    return ans;

}

int decimalToOctal(int n){
    int ans = 0;
    int x = 1;
    while(x<=n)
        x *= 8;
    x /= 8;
    
    while (x>0){
        int digit = n / x;
        n %= x;
        ans = ans*10 + digit; 
        x /= 8;
    }
    return ans;

}

string decimalToHexadecimal(int n){

    string ans = "";
    int x = 1;
    while(x<=n)
        x *= 16;

    x /= 16;
    while(x>0){
        int digit = n/x;
        n %= x;
        x /= 16;
        if(digit>=0 && digit<=9)
            ans = ans + to_string(digit);
        else 
            ans = ans + char(digit - 10 + 'A');
        
    }
    return ans;

}


int main() {
    //for hexadecimal conversion, uncomment this input
    /*string s; 
    cin>>s;*/
    //for other conversions, uncomment
    int n;
    cin>>n;
    // cout<<binaryToDecimal(n)<<endl;
    // cout<<octalToDecimal(n)<<endl;
    // cout<<hexadecimalToDecimal(s);
    //cout<<decimalToBinary(n);
    //cout<<decimalToOctal(n);
    cout<<decimalToHexadecimal(n);
    return 0;
}