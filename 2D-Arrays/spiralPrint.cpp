#include<iostream>

using namespace std;

int main(){
    int row, column;
    cin>>row>>column;
    int arr[row][column];
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cin>>arr[i][j];
        }
    }
    
    int row_start = 0, row_end = row - 1 , col_start = 0, col_end = column - 1;
    while(row_start<=row_end && col_start<=col_end){
        //for row start
        for(int i=col_start;i<=col_end;i++){
            cout<<arr[row_start][i]<<" ";
        }
        row_start++;

        //for end column
        for(int i=row_start;i<=row_end;i++){
            cout<<arr[i][col_end]<<" ";
        }
        col_end--;

        //for end row 
        for(int i=col_end;i>=col_start;i--){
            cout<<arr[row_end][i]<<" ";
        }
        row_end--;

        //for column start
        for(int i=row_end;i>=row_start;i--){
            cout<<arr[i][col_start]<<" ";
        }
        col_start++;

    }

    return 0;
}