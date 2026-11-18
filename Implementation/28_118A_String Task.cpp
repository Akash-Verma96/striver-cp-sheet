#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;

    string ans = "";

    for(int i=0 ; i<s.size(); i++){
        char ch = s[i];
        if(ch == 'A' || ch == 'O' || ch == 'Y' 
            || ch == 'E' || ch == 'U' || ch == 'I' ||
             ch == 'a' || ch == 'o' || ch == 'y' 
            || ch == 'e' || ch == 'u' || ch == 'i'){
            continue;
        }

        ans += '.';

        if(ch >= 'A' && ch <= 'Z'){
            ans += ch + 32;
        } else {
            ans += ch;
        }
    }


    cout << ans ;

    return 0;
}