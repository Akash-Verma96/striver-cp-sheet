#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;

    for(int i=0; i<5; i++){
        string c;
        cin >> c;

        if(c[0] == s[0] || c[1] == s[1]){
            cout << "YES";
            return 0;
        }
    }

    cout << "No";


    return 0;
}