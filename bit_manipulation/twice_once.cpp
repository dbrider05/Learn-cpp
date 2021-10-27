#include<iostream>

using namespace std;

int getbit(int n, int pos){
    return (n & 1<<pos);
}

int unique1(int arr[], int n){

    int xorsum = 0;
    for(int i=0;i<n;i++)
        xorsum ^= arr[i];
    return xorsum;
    
}
void unique2(int arr[], int n){

    int xorsum = 0;
    for(int i=0;i<n;i++){
        xorsum ^= arr[i];
    }
    int tempxor = xorsum;
    int setbit = 0;
    int pos = 0;
    while(setbit != 1){
        setbit = xorsum & 1;
        pos++;
        xorsum = xorsum >> 1; 
    }
    int newxor = 0;
    for(int i=0;i<n;i++){
        if(getbit(arr[i],pos-1))
            newxor ^= arr[i]; 
    }

    cout << newxor <<endl;
    cout << (newxor ^ tempxor);
}

int main(){

    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    int ans = unique1(arr,n);
    unique2(arr,n);
    //cout << ans;
    return 0;
}