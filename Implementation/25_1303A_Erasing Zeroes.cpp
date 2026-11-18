#include<bits/stdc++.h>

using namespace std;

int main(){
    int n ;
    cin >> n;

    while(n--){
        string s;
        cin >> s;

        int i = 0;
        while(i < s.size() && s[i] != '1') i++;
        
        int j = s.size() -1;
        while(j >= 0 && s[j] == '0') j--;


        int count = 0;
        while(i < j){
            if(s[i] == '0') count++;
            i++;
        }


        cout << count << endl;
    }


    return 0;
}