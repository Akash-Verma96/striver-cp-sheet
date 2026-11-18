#include<bits/stdc++.h>
using namespace std;

int main(){
    int pages;
    cin >> pages;

    vector<int> arr;
    for(int i=0; i<7; i++){
        int val;
        cin >> val;
        arr.push_back(val);
    }
    int i = 0;
    while(pages > 0){
        pages -= arr[i];
        if(pages <= 0) break;
        i++;
        i = i % 7;
    }

    cout << i + 1 << endl;
    return 0;
}