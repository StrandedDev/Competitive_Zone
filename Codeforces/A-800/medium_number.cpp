#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, a, b, c;
    cin >> t;

    while(t--){
        cin >> a >> b >> c;

        int mn = min({a,b,c});
        int mx = max({a,b,c});


        if(a != mn && a != mx) cout << a << endl;
        else if(b != mn && b != mx) cout << b << endl;
        else if(c != mn && c != mx) cout << c << endl;
    }


    return 0;
}
