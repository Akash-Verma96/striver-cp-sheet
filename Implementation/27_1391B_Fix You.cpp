#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n,m;
        cin >> n;
        cin >> m;
        int count = 0;

        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                char ch;
                cin >> ch;
                if(j == m && ch == 'R') count++;
                if(i == n && ch == 'D') count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}