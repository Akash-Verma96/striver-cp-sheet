#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> arr(26,0);

    for(int i=0; i<s.size(); i++){
        arr[s[i]-'a']++;
    }

    int mini = INT_MAX;


    for(int i=0;i<26;i++){
        if(arr[i] == 1){
            cout << -1 << endl;
            return 0;
        }
        if(arr[i] != 0){
            mini = min(mini,arr[i]);
        }
    }


    string ans = "";

    for(int i=0; i<)

    cout << ans << endl;


    return 0;
}