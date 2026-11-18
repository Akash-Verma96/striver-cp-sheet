#include<bits/stdc++.h>

using namespace std;

int main(){
    int limark, bob;

    cin >> limark;
    cin >> bob;

    int years = 0;

    while(bob >= limark){
        years++;

        limark *= 3;
        bob *= 2;
    }

    cout << years;

    return  0;
}