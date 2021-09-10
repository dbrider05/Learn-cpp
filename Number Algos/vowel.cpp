#include<iostream>

using namespace std;

int main() {

    char ch;
    cin>>ch;
    char c = tolower(ch);
    if(c == 'a' || c =='e' || c =='i' || c == 'o' || c == 'u') {
        cout<<ch<<" is a vowel";
    }
    else if(!isalpha(ch))
        cout<<"Its not an alphabet";

    else{
        cout<<ch<<" is a consonant";
    }
    return 0;
}