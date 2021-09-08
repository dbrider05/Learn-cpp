#include<iostream>

using namespace std;

int main(){

    int n, i, j, spaces;
    cout<<"input n:";
    cin>>n;

    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++)
            cout<<"*";
        
        spaces = 2*n - 2*i;
        
        for(j=1;j<=spaces;j++)
            cout<<" ";
        
        for(j=1;j<=i;j++)
            cout<<"*";
        
        cout<<endl;
    }

    for(i=n;i>=1;i--){
        for(j=1;j<=i;j++)
            cout<<"*";
        
        spaces = 2*n - 2*i;
        
        for(j=1;j<=spaces;j++)
            cout<<" ";
        
        for(j=1;j<=i;j++)
            cout<<"*";
        
        cout<<endl;
    }
    return 0;
} 