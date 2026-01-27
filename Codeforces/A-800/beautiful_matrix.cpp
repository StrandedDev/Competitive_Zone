#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    int s = 5;
    int matrix[s][s];
    int r, c, steps;
 
    for(int i = 0; i < s; i++){
        for(int j = 0; j < s; j++){
            cin >> matrix[i][j];
        }
    }
 
    for(int i = 0; i < s; i++){
        for(int j = 0; j < s; j++){
            if(matrix[i][j] == 1){
                r = i + 1;
                c = j + 1;
            }
        }
    }
 
    if(r > 3 || c > 3){
        steps = abs(3 - r) + abs(3 - c);
    }else{
        steps = abs(3 - r) + abs(3 - c);
    }
 
 
    cout << steps;
 
 
    return 0;
}