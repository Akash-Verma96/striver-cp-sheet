#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<int> arr;

        for(int i=0; i<2*n; i++){
            int val;
            cin >> val;
            arr.push_back(val);
        }

        
        sort(arr.begin(),arr.end());

        arr.clear();
        
        cout << arr[n+1-1] - arr[n-1] << endl;
    }

    return 0;
}