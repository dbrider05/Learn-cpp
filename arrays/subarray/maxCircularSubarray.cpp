#include<iostream>
#include<climits>
using namespace std;

int kadane(int arr[], int n){
    int maxsum = INT_MIN,cursum = 0;
    for(int i=0;i<n;i++){
        cursum += arr[i];
        if(cursum < 0)
            cursum = 0;
        maxsum = max(maxsum,cursum);
    }
    return maxsum;
}

int main(){

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    
    int nonwrapsum = kadane(a, n);
    int totalsum = 0;
    for(int i=0;i<n;i++){
        totalsum += a[i];
        a[i] = -a[i];
    }
    int wrapsum = totalsum + kadane(a,n);
    int maxsum = INT_MIN;
    maxsum = max(wrapsum, nonwrapsum);
    cout<<maxsum;
    return 0;
}