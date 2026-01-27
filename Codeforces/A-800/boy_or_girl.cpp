#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;

    int total = 0;
    int sz = str.size();

    for (int i = 0; i < sz; i++) {
        bool seen = false;

        for (int j = 0; j < i; j++) {
            if (str[i] == str[j]) {
                seen = true;
                break;
            }
        }
        if (!seen) total++;
    }

    if (total % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    }
    else {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}