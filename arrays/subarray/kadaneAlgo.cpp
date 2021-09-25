//time complexity O(n)
#include<iostream>
#include<climits>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    
    int cursum = 0, maxsum = INT_MIN;
    for(int i=0;i<n;i++)
    {
        cursum += a[i];
        maxsum = max(cursum,maxsum);
        if(cursum<0)
            cursum = 0; 
    }
    cout<<maxsum;
    return 0;
}