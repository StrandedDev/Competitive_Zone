#include <bits/stdc++.h>
using namespace std;

int main() {
    double num;
    cin >> num;
    vector<double> arr;

    for (int i = 1; i < 6; i++) {
        arr.push_back(ceil(num/i));
    }

    sort(arr.begin(),arr.end());

    cout << arr.front() << endl;

    return 0;
}