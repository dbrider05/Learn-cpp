#include<iostream>

using namespace std;

void ascend(int n){
    if (n==0)
        return;
    ascend(n-1);
    cout << n << endl;
}

int main(){

    int n;
    cin >> n;
    ascend(n);
    return 0;

}