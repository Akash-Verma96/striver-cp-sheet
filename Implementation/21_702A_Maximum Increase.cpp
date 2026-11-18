#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int count = 0;
    int maxi = INT_MIN;
    int prev = 0;
    while(n--){
        int val;
        cin >> val;
        if(val > prev){
            count++;
        } else{
            count = 1;
        }

        prev = val;
        maxi = max(maxi,count);
    }

    cout << maxi;

    return 0;
}