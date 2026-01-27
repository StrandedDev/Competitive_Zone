#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    if (num > 2 && num % 2 == 0) return false;
    if (num == 2) return true;

    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) return false;
    }

    return true;
}

int main() {

    int t, x, y;
    cin >> t;

    while(t--){
        cin >> x >> y;

        if (isPrime(x) && isPrime(y) && y - x == 2) {
            cout << "Y" << endl;
        }else {
            cout << "N" << endl;
        }
    }

    return 0;
}