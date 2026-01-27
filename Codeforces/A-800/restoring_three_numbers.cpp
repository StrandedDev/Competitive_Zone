#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> arr;

    int x = 4;
    while (x--) {
        int n;
        cin >> n;
        arr.push_back(n);
    }

    sort(arr.begin(), arr.end());

    cout << arr[3] - arr[2] << " " << arr[3] - arr[1] << " " << arr[3] - arr[0] << endl;


    return 0;
}