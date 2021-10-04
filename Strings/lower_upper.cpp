#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){

    string s;
    getline(cin, s);
    //to upper case
    for(int i = 0;i < s.size();i++){
        if(s[i] >= 'a' and s[i] <='z'){
            s[i] -= 32;
        }
    }
    cout << s << endl;

    //for lower case
    for(int i = 0;i < s.size();i++){
        if(s[i] >= 'A' and s[i] <= 'Z'){
            s[i] +=32;
        }
    }
    cout << s << endl;

    transform(s.begin(),s.end(),s.begin(),::toupper);
    cout << s << endl;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    cout<< s << endl;
    return 0;
}
