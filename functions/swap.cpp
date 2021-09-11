#include<iostream>

using namespace std;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {

    int num1,num2;
    cin>>num1>>num2;
    cout<<"before swapping, num1 = "<<num1<<" num2 = "<<num2<<endl;
    swap(&num1, &num2);
    cout<<"after swapping, num1 = "<<num1<<" num2 = "<<num2;
    return 0;
}