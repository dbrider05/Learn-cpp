#include<iostream>

using namespace std;

int main() {

    int n, ans = 0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    for(int i=0;i<n;i++){
        
        for(int j=i;j<n;j++){
            ans += arr[j];
            cout<<ans<<" ";
        }
    }
    return 0;

}