#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, a, b, cnt = 0, mx = 0;
    cin >> t;


    while(t--){
        cin >> a >> b;

        cnt -= a;
        cnt += b;

        if(cnt > mx) mx = cnt;

    }


    cout << mx << endl;


    return 0;
}
