/*
 * Problem:       1139B - Chocolates
 * Platform:      Codeforces
 * Solved By:     Akash Verma
 * Date:          24 November 2026
 */


#include<bits/stdc++.h>

using namespace std;

int main(){
    int n ;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    long long noOfChoco = arr[n-1];
    int maxi = arr[n-1];
    for(int i=n-2; i>=0; i--){

        if(arr[i] >= maxi){
            maxi = max(0, maxi-1);
        }
        else{
            maxi = arr[i];
        }
        noOfChoco += maxi;
    }

    cout << noOfChoco;

    return 0;
}