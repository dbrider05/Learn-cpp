#include<iostream>

using namespace std;

bool isSorted(int arr[], int n){
    if(n==1)
        return true;
    bool restArray = isSorted(arr+1,n-1); 
    return ((arr[0] < arr[1]) && restArray);
}

int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];

    if(isSorted(arr,n))
        cout << "Array is Sorted";
    else cout <<"Array is not Sorted";
    return 0;

}