#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    int M, N;
    cin >> M >> N;
 
    // Size of tile
    int size = 2*1;
 
 
    if(M >= 1 && N >= 1){
        if(M % 2 == 0){
            cout << (M*N)/size << endl;
        }
        else if(M % 2 != 0 && N % 2 == 0){
            cout << (M*N)/size << endl;
        }
        else if(M % 2 != 0 && N % 2 != 0){
            cout << ((M*N)-1)/size << endl;
        }
    }
 
 
    return 0;
}