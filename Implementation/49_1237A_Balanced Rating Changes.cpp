/*
 * Problem:       1237A - Balanced Rating Changes
 * Platform:      Codeforces
 * Solved By:     Akash Verma
 * Date:          18 November 2026
 */


#include<bits/stdc++.h>

using namespace std;

int main(){
    int n ;
    cin >> n;

    bool flag = true;
    for(int i=1; i<=n; i++){
        int val;
        cin >> val;
        if(val % 2 == 0){
            cout << val/2 << endl;
        }
        else{
            if(flag){
                int rating = ceil(val/2.0);
                if(rating == -0) abs(rating);
                cout << rating << endl;
                flag = !flag;
            }
            else{
                int rating = floor(val/2.0);
                if(rating == -0) abs(rating);
                cout << rating << endl;
                flag = !flag;
            }
        }
    }

    return 0;
}