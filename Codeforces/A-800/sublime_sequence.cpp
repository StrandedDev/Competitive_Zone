#include <bits/stdc++.h>
using namespace std;

int main() {

    int t, x, n;
    cin >> t;

    while (t--) {
        cin >> x >> n;

        if (n%2 != 0) {
            cout << x << endl;
        }else {
            cout << 0 << endl;
        }

    }

    return 0;
}