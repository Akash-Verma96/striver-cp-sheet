#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    while(n--){
        int val;
        cin >> val;

        int ans = 0;

        for(int i=1; i<=9; i++){
            int num = i;
            int mul = i*10;
            for(int digit=1; digit<=4; digit++){
                ans += digit;
                if(num == val){
                    cout << ans << endl;
                    break;
                }

                num += mul;
                mul *= 10;
            }

            if(num == val) break;
        }
    }

    return 0;
}