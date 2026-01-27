#include <bits/stdc++.h>
using namespace std;

int main() {

    char ch;
    set < char > charset;

    while (cin >> ch) {
        if (isalpha(ch)) {
            charset.insert(ch);
        }
    }


    cout << charset.size() << endl;

    return 0;
}