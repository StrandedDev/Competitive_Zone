#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, total = 0;
    cin >> n;

    vector<long long> arr(n - 1);

    for (int i = 0; i < (n - 1); i++) {
        cin >> arr[i];
    }

    long long sum = (n * (n + 1)) / 2;

    for (long long i: arr) {
        total += i;
    }

    cout << sum - total << endl;

    return 0;
}
