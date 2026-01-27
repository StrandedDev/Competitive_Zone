#include <bits/stdc++.h>
using namespace std;

int main() {

    int t, a,b,c,d;
    cin >> t;

    for(int i = 1; i <= t; i++){
        cin >> a >> b >> c >> d;

        if(a == b && b == c && c == d && d ==a)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }


    return 0;
}
