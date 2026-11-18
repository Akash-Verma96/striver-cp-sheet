#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    map<int,int> mpp;

    for(int i=1; i<=n; i++){
        int val;
        cin >> val;
        mpp[val] = i;
    }

    for(int i=1; i<=n; i++){
        cout << mpp[i] << " ";
    }

    return 0;
}