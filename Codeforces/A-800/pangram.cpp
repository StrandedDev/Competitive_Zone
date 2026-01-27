#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string str;
    string strLower = "";
    set<char> myset;

    cin >> n;
    cin >> str;

    for (int i = 0; i < n; i++) {
        strLower += tolower(str[i]);
    }

    for (char i : strLower) {
        myset.insert(i);
    }

    (myset.size() == 26) ? cout << "YES" : cout << "NO";
    cout << endl;

    return 0;
}