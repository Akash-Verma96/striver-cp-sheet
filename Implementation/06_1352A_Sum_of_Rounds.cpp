#include<bits/stdc++.h>

using namespace std;

void findRoundInteger(int num){
    int x = 1;
    while(num > 0){
        int digit = num % 10;
        if(digit != 0){
            cout << digit * x << " ";
        }

        x *= 10;
        num /= 10;
    }
}

int main(){
    int n;
    cin >> n;

    while(n--){
        int num ;
        cin >> num;

        int x = num;
        int cnt = 0;
        while(x > 0){
            if(x % 10 != 0) cnt++;
            x /= 10;
        }

        if(cnt > 0){
            cout << cnt << endl;
            findRoundInteger(num);
            cout << endl;
        }
    }


    return 0;
}