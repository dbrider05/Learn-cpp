#include<bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    int pd = arr[1] - arr[0];
    int i = 2;
    int curLength= 2, ans = 2;
    
    while(i<n){
        if(pd == arr[i]-arr[i-1])
            curLength++;
        else{
            pd = arr[i] - arr[i-1];
            curLength = 2;
        }
        ans = max(curLength, ans);
        i++;
    }
    cout<<ans<<endl;

}