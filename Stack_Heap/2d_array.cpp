#include<iostream>

using namespace std;

int main(){

    int row,col,num=0;
    cin>>row>>col;
    int *arr = new int[row*col];
    //for taking input
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            *(arr+i*col+j)=++num;
        }
    }

    //for traversing the array

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<*(arr+i*col+j)<<" ";
        }
        cout<<endl;
    }
    delete[] arr;
    return 0;
}
