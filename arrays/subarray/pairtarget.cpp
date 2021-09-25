#include<iostream>

using namespace std;

int main() {

    int n, k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int low = 0, high = n-1;
    while(low<high){
        if(a[low] + a[high] == k){
            cout<<"found"<<endl;
            return 0;
        }
        else if(a[low] + a[high] < k)
            low++;
        else high++;
    }
    cout<<"not found";
    return 0;
}