#include<bits/stdc++.h>

using namespace std;

int main(){
    int x1, x2, x3;
    int mini, maxi;

    cin >> x1 >> x2 >> x3;

    mini = min(min(x1,x2),x3);
    maxi = max(max(x1,x2),x3);

    cout << maxi - mini;

    return 0;
}