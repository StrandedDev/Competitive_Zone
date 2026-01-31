#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    optimize();

    int t;
    cin >> t;

    while(t--){
        int a, b, c;
        cin >> a >> b >> c;

        int mid = a + b + c - min({a, b, c}) - max({a, b, c});

        if(a == b && b == c) cout << 0 << endl;
        else{
            cout << abs(a-mid) + abs(b-mid) + abs(c-mid) << endl;
        }
    }

    return 0;
}
