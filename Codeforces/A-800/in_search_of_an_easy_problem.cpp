#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, num;
    bool isEasy = true;
    cin >> t;

    while(t--) {
        cin >> num;

        if (num == 1) {
            isEasy = false;
            break;
        }
    }

    (isEasy) ? cout << "EASY" : cout << "HARD";

    return 0;
}