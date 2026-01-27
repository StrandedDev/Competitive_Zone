#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int total = 0;

    while (t--) {
        int n;
        cin >> n;

        while (n != 0) {
            total += n%10;
            n /= 10;
        }
        cout << total << endl;
        total = 0;
    }

    
    return 0;
}