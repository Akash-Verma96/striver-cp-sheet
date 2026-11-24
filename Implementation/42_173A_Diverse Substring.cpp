/*
 * Problem:       173A - Diverse Substring
 * Platform:      Codeforces
 * Solved By:     Akash Verma
 * Date:          24 November 2026
 */


#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    for(int i=1; i<n; i++){
        if(s[i-1] != s[i]){
            cout << "YES" << endl;
            cout << s[i-1] << s[i];
            return 0;
        }
    }

    cout << "NO";
    return 0;
}