#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, p, q;
    int availableRooms = 0;
    cin >> n;

    while (n--) {
        cin >> p >> q;
        
        if (q-p >= 2) availableRooms++;
    }

    cout << availableRooms << endl;

    return 0;
}