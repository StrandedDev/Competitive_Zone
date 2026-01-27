#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        if (n > 3)
            cout << n - 3 << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}