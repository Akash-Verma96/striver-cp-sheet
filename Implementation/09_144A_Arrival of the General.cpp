#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;

    cin >> n;
    int mini = INT_MAX;
    int minIndex, maxIndex = -1;
    int maxi = INT_MIN;

    for(int i=0; i<n; i++){
        int val;
        cin >> val;

        if(val <= mini){
            mini = val;
            minIndex = i;
        }
        if(val > maxi){
            maxi = val;
            maxIndex = i;
        }
    }

    if(maxIndex > minIndex){
        cout << (n - minIndex - 1) + (maxIndex - 0) - 1;
    }
    else{
        cout << (n - minIndex - 1) + (maxIndex - 0);
    }

    return 0;
}