#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int k;
    cin >> k;

    for(int i=0; i<k; i++){
        int digit = n % 10;
        if(digit == 0){
            n /= 10;
        }
        else {
            n -= 1;
        }
    }

    cout << n;
    return 0;
}