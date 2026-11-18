#include<bits/stdc++.h>

using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        long long a,b,n;
        long long maxi = INT_MIN;
        cin >> a;
        maxi = max(maxi,a);
        cin >> b;
        maxi = max(maxi,b);
        cin >> n;
        long long sum = b + a;
        int steps = 1;
        while(n >= sum){
            sum += maxi;
            maxi = sum - maxi;
            steps++;
        }

        cout << steps << endl;
    }
    return 0;
}