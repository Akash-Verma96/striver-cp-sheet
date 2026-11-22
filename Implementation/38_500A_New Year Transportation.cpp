/*
 * Problem:       500A - New Year Transportation
 * Platform:      Codeforces
 * Solved By:     Akash Verma
 * Date:          22 November 2026
 */

#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, t;
    cin >> n >> t;
    int arr[n];

    for(int i=1; i<n; i++){
        cin >> arr[i];
    }
    int i = 1;
    while(i < n){
        if(i == t){
            cout << "YES";
            return 0;
        }

        i = i + arr[i];
    }

    if(i == t){
        cout << "YES";
    }
    else cout << "NO";

    return 0;
}