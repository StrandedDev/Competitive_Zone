#include <bits/stdc++.h>
using namespace std;

int main() {
    string str, revstr;
    cin >> str >> revstr;

    reverse(str.begin(), str.end());

    if (str == revstr) cout << "YES" << endl;
    else cout << "NO" << endl;
    
    return 0;
}