#include <bits/stdc++.h>
using namespace std;

int main() {
    double n, m, a;
    long long int total;
    cin >> n >> m >> a;

    total = ceil(n/a) * ceil(m/a);
    cout << total << endl;

    return 0;
}