#include<bits/stdc++.h>

using namespace std;

int main(){
    long long n,m;
    cin >> n;
    cin >> m;
    
    

    if(m % n != 0){
        cout << -1 << endl;
        return 0;
    }

    long long num = m/n;
    long long count = 0;
    while(num > 1){
        count++;
        if(num % 2 == 0){
            num /= 2;
        } else if(num % 3 == 0){
            num /= 3;
        } else {
            cout << -1 << endl;
            return 0;
        }
    }

    cout << count << endl;

    return 0;
}