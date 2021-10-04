#include<iostream>
#include<string>

using namespace std;

int main() {

    string s;
    getline(cin, s);
    int arr[26];
    for(int i = 0;i < 26;i++)
        arr[i] = 0;

    int maxFreq = 0;
    char ans = 'a';

    for(int i = 0;i < s.size();i++){
        arr[s[i]-'a']++;
    }

    for(int i = 0;i < 26;i++){
        if(arr[i] > maxFreq){
            maxFreq = arr[i];
            ans = i + 'a';
        }
    }

    cout << maxFreq << " " << ans << endl;

    return 0;
}
