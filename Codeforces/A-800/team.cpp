#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int a, b, c, n, total;
 
    cin >> n;
 
    total = 0;
    for(int i = 0; i < n; i++){
        cin >> a >> b >> c;
        
        if((a + b + c) >= 2){
            total++;
        }
    }
 
    cout << total << endl;
 
    return 0;
}