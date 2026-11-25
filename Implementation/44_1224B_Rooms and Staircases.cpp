#include<bits/stdc++.h>

using namespace std;

int main(){
    int q;
    cin >> q;
    while(q--){
        int n;
        cin >> n;
        string s;
        int rooms = n;
        for(int i=0; i<n; i++){
            char ch;
            cin >> ch;
            if(ch == '1'){
                rooms = max(rooms,2 * (i+1));
                rooms = max(rooms,2 * (n-i));
            }
        }
        

        cout << rooms << endl;

    }

    return 0;
}