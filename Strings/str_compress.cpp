#include<iostream>
#include<string>

using namespace std;

int main() {

    string s;
    char ans[100];
    getline(cin, s);
    int k=1;
    ans[0]=s[0];
    for(int i = 1;i <= s.size();i++){

        if(s[i] != s[i-1])
            ans[k++] = s[i];
    }

    cout << ans;
    cout << endl;

    return 0;
}
