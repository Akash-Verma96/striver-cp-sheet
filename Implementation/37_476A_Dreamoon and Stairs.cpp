/*
 * Problem:       476A - Dreamoon and Stairs
 * Platform:      Codeforces
 * Solved By:     Akash Verma
 * Date:          22 November 2026
 */

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    int minStep = ceil(n/2.0);

    for(int i=minStep; i<=n; i++){
        if(i%m == 0){
            cout << i;
            return 0;
        }
    }

    cout << -1;

    return 0;
}
