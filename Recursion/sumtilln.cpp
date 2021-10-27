#include<iostream>

using namespace std;

int sumtilln(int n){
    if(n==0)
        return 0;
    int prevSum = sumtilln(n-1);
    return n + prevSum;
}

int main(){

    int n;
    cin >> n;
    cout << sumtilln(n);
}