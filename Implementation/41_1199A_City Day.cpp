/*
 * Problem:       1199A - City Day
 * Platform:      Codeforces
 * Solved By:     Akash Verma
 * Date:          18 November 2026
 */

#include<bits/stdc++.h>

using namespace std;

bool isLeftPossible(int ind,int x,vector<int>& arr){
    int i = ind-1;
    while(i >= 0 && ind-i <= x){
        if(arr[i] < arr[ind]) return false;
        i--;
    }

    return true;
}

bool isRightPossible(int ind,int y,vector<int>& arr){
    int j = ind+1;
    while(j < arr.size() && j - ind <= y){
        if(arr[j] < arr[ind]) return false;
        j++;
    }

    return true;
}

int main(){
    int n, x, y;
    cin >> n >> x >> y;

    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }


    for(int i=0; i<n; i++){
        if(isLeftPossible(i,x,arr) && isRightPossible(i,y,arr)){
            cout << i+1;
            return 0;
        }
    }


    return 0;
}