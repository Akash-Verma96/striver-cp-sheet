/*
 * Problem:       1373A - Donut Shops
 * Platform:      Codeforces
 * Solved By:     Akash Verma
 * Date:          22 November 2026
 */

#include<bits/stdc++.h>

using namespace std;

int main(){
    int q;
    cin >> q;

    while (q--){
        int a,b,c;
        cin >> a >> b >> c;

        if(a <= c/b){
            cout << 1 << " " << -1 << endl;
            continue;
        }
        int count = 0;
        while(a < c){
            count++;
            a += a;
        }

        if(count == 0){
            cout << -1 << " " << b << endl;
            continue;
        }

        cout << count << " " << b << endl;
    }
    return 0;
}