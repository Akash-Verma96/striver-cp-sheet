#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    int sumOfFaces = 0;

    while(n--){
        string s;
        cin >> s;
        char ch = s[0];
        if( ch == 'T') sumOfFaces += 4;
        else if(ch == 'C') sumOfFaces += 6;
        else if(ch == 'O') sumOfFaces += 8;
        else if(ch == 'D') sumOfFaces += 12;
        else sumOfFaces += 20;
    }
    
    cout << sumOfFaces;

    return 0;
}