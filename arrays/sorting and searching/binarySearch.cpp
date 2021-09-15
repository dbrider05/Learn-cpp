#include<iostream>

using namespace std;

int main() {

    int n, key, mid;
    bool isFound = false;
    cin>>n>>key;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int start = 0, end = n-1;    
    while(start<=end){
        mid = (start+end)/2;
        if(arr[mid] == key){
            isFound = true;
            break;
        }
        else if(key>arr[mid])
            start = mid + 1;
        else 
            end = mid - 1;
    } 
    if(isFound)
        cout<<"The element is found at aa index "<<mid;
    else 
        cout<<"Can't find the element";
    return 0;
}