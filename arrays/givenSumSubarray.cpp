#include<iostream>

using namespace std;

int main() {

    int n, s;
    cin>>n>>s;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int sum = 0, i = 0, j=0;
    while(j<n && sum + a[j]<= s){
        sum += a[j];
        j++;
    }
    if(sum==s){
        cout<<i+1<<" "<<j<<endl;
        return 0;
    }

    sum += a[j];
    while(sum>s){
        sum -= a[i];
        i++;
    }
    if(sum==s)
        cout<<i+1<<" "<<j+1<<endl;
    else cout<<"subarray not found";
    return 0;
}