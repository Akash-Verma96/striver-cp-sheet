/*
 * Problem:       268B - Buttons
 * Platform:      Codeforces
 * Solved By:     Akash Verma
 * Date:          22 November 2026
 */

#include<bits/stdc++.h>

using namespace std;
int helper(int n, int N){
    if(n == 0 || n == 1) return n;

    return (N-n)*(n-1) + n  + helper(n-1,N);
}
int main(){
    int N;
    cin >> N;
    
    cout << helper(N,N);
    return 0;
}