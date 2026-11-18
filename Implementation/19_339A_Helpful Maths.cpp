#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;

    int n = s.size();
    int i =0 ;
    int j = n-1;
    int mid = 0;

    while(mid <= j){
        if(s[mid] == '1'){
            swap(s[i],s[mid]);
            i += 2;
            mid += 2;
        }
        else  if(s[mid] == '2'){
            mid += 2;
        }
        else{
            swap(s[mid], s[j]);
            j -= 2;
        }
    }

    cout << s;

    return 0;
}