#include<iostream>

using namespace std;

int main() {

    int key,n,i;
    bool check = false;
    cin>>n>>key;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(i=0;i<n;i++){
        if(arr[i]==key){
            check = true;
            break;
        }
    }
    if(check)
        cout<<"Element is founded at index "<<i;
    else 
        cout<<"Can't find the element";

    return 0;
}