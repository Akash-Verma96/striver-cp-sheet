#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int sum = 0;
    int capacity = INT_MIN;

    for(int i=0; i<n; i++){
        int ai, bi;
        cin >> ai;
        cin >> bi;
        sum = sum - ai;
        sum += bi;

        capacity = max(capacity,sum);
    }

    cout << capacity;

    return 0;
}