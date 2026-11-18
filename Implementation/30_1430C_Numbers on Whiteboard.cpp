#include<bits/stdc++.h.>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        if(n == 2){
            cout << 2 << endl;
            cout << 2 << " " << 1 << endl;
            continue;
        }

        cout << "2" << endl;
        cout << n << " " << n-2 << endl;
        cout << n-1 << " " << n-1 << endl;
        n--;
        while(n >= 3){
            cout << n << " " << n-2 << endl;
            n--;
        }
    }

    return 0;
}