/*
 * Problem:       109A - Lucky Sum Of Digits
 * Platform:      Codeforces
 * Solved By:     Akash Verma
 * Date:          24 November 2026
 */


#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    int digit = n/7;
    int c4 = n/4;
    int c7 = n/7;
    while(digit >= 0){
        int rem = n - (digit * 7);
        if(rem%4 == 0){
            c4 = rem/4;
            c7 = digit;
            break;
        }
        digit--;
    }

    if(digit < 0){
        cout << -1;
        return 0;
    }

    for(int i=0; i<c4; i++) cout << 4;
    for(int i=0; i<c7; i++) cout << 7;

    return 0;
}