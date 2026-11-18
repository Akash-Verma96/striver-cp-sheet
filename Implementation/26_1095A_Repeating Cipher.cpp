#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    string ans = "";

    int si = 1;
    int i =0;
    while(i < n){
        ans += s[i];

        i += si;
        si++;
    }

    cout << ans;

    return 0;
}