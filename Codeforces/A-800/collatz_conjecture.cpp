#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, k, x;
    cin >> t;

    while (t--) {
        cin >> k >> x;
        for (int i = 0; i < k; i++) {
            x = x * 2;
        }

        cout << x << endl;
    }

    
    return 0;
}