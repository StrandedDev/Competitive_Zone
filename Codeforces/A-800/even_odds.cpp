#include <bits/stdc++.h>
using namespace std;

int main() {

    long long n, k;

    cin >> n >> k;


    long long x = (n+1)/2;  // 4

    if(k <= x){
        cout << (2*k) - 1 << endl;
    }
    else{
        cout << (k - x) * 2 << endl;
    }


    return 0;
}
