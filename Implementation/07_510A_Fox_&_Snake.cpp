#include<bits/stdc++.h>
using namespace std;


int main(){
    int n,m;
    cin >> n >> m;
    bool flag = true;
    int i = 0;

    while(i<n){
        for(int j=0; j<m; j++){
            cout << '#';
        }
        cout << endl;
        i++;
        if(i >= n) break;
        for(int j =0 ;j<m; j++){
            if(flag){
                if(j == m-1) cout << '#';
                else cout << '.';
            }
            else{
                if(j == 0) cout << "#";
                else cout << '.';
            }
        }
        cout << endl;
        flag = !flag;
        i++;
    }

    return 0;
}