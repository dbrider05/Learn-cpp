#include<iostream>
#include<climits>

using namespace std;

int main() {
    
    int n, i;
    cin>>n;
    int candies[n];
    
    for(i=0;i<n;i++)
        cin>>candies[i];
    
    int maxCandies = INT_MIN;
    
    for(i=0;i<n;i++){
        maxCandies = max(maxCandies, candies[i]);
    }

    cout<<maxCandies<<endl;
    return 0;
}