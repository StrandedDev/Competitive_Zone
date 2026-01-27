#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    bool tracker = true;

    for (int i = 0; i < n - 1; i++) {

        if (tracker) {
            cout << "I hate that ";
            tracker = false;
        }
        else {
            cout << "I love that ";
            tracker = true;
        }

    }


    if (n % 2 != 0) {
        cout << "I hate it" << endl;
    }
    else {
        cout << "I love it" << endl;
    }



    return 0;
}