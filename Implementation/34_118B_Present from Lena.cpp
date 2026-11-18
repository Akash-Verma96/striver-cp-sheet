#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    int k = 0;
    for(int i=0; i<=2*n; i++){

        if(i <= n){
            for(int j=i; j<n; j++){
                cout << "  ";
            }

            for(int j=0; j<i; j++){
                cout << j << " ";
            }
        } else {
            for(int j=0; j<=k; j++){
                cout << "  ";
            }

            for(int j=0; j<=n-2-k; j++){
                cout << j << " ";
            }

        }
        
        if(i <= n){
            for(int j=i; j>=0; j--){
                cout << j;
                if(j != 0) cout << " ";
            }
        } else {
            
            for(int j=n-1-k; j>=0; j--){
                cout << j;
                if(j != 0) cout << " ";
            }
            k++;
        }
        
        cout << endl;
    }

    

    return 0;
}


