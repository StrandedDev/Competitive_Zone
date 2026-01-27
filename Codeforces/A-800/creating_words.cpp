#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    string  a, b;

    while(t--){
        cin >> a >> b;

        char tmp = b[0];
        b[0] = a[0];
        a[0] = tmp;

        cout << a << " " << b << endl;
    }


    return 0;
}
