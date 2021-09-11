#include<iostream>

using namespace std;

void alphabet(char c) {

    if(c=='a' || c == 'e' || c=='i' || c=='o' || c=='u')
        cout<<"Its a vowel";
    else if(isalpha(c))
        cout<<"Its a consonant";
    else cout<<"Please enter an alphabet";
}

int main() {

    char c;
    cin>>c;
    c = tolower(c);
    alphabet(c);
    return 0;
}