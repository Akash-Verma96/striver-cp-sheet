#include<bits/stdc++.h>
using namespace std;

int main(){
    /* 
    Think in direction that how much row and col of 1 shifted from the
    target row and col !
    
    after calculating the shift of row and col of 1 from target row and col just
    just add both of them that's it this is your answer ! 

    FormulaUsed --> (abs(targetRow - shiftedRow) + abs(targetCol - shiftedCol))
    
    */
    int matrix[6][6];

    int x,y = 0;
    for(int i=1; i <6; i++){
        for(int j=1; j<6; j++){
            cin >> matrix[i][j];
            if(matrix[i][j] == 1){
                x = i;
                y= j;
            }
        }
    }

    cout << (abs(3-x) + abs(3-y));

    return 0;
}