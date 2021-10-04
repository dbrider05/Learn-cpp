#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){

    string s;
    getline(cin, s);
    for(int i=0;i < s.size();i++){
        sort(s.begin(), s.end(), greater<int>());
    }
    cout << s << endl;

    return 0;
}
