/*
 * Problem:       131A - cAPS lOCK
 * Platform:      Codeforces
 * Solved By:     Akash Verma
 * Date:          24 November 2026
 */

#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;

    for(int i=1; i<s.size(); i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            cout << s;
            return 0;
        }
    }

    for(int i=0; i<s.size(); i++){
        if(i == 0 && (s[i] >= 'a' && s[i] <= 'z')){
            s[i] = toupper(s[i]);
        }
        else{
            s[i] = tolower(s[i]);
        }
    }

    cout << s;
    return 0;
}