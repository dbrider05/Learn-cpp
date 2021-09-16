#include<bits/stdc++.h>
#include<climits>

using namespace std;

int main() {

    int n, mx = INT_MIN;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
        cin>>arr[i];

    for(int i=0;i<n;i++){
        mx = max(arr[i],mx);
        cout<<mx<<endl;
    }
    return 0;
}