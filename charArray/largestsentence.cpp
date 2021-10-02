#include<iostream>


using namespace std;

int main(){

    int n;
    cin>>n;
    char arr[n+1];
    cin.ignore();
    cin.getline(arr,n);
    cin.ignore();
    int currLen=0, maxLen=0;
    int stLen=0, stMax=0;
    for(int i=0;i<n;i++){
        if(arr[i] == ' '){
            if(currLen>maxLen){
                maxLen = currLen;
                stMax = stLen;
            }
            stLen = i+1;
            currLen = 0;
        }
        currLen++;
    }

    for(int i=0;i<maxLen;i++)
        cout<<arr[stMax+i];

    return 0;
}