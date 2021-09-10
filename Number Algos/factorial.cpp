#include<iostream>

using namespace std;

int main() {

    int n, fact = 1;
    cin>>n;

    for (int i=0;i<n;i++){
        fact += fact * i;
    }
    cout<<"factorial is:"<<fact<<endl;

    return 0;
}