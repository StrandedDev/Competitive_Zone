#include <bits/stdc++.h>
using namespace std;

int main() {

    string str;
    int tUpper = 0;
    int tLower = 0;

    cin >> str;
    int sz = str.size();


    for(int i = 0; i < sz; i++){
        if(str[i] == tolower(str[i])) {
            tLower++;
        }else {
            tUpper++;
        }
    }

    if (tLower > tUpper) {
        for (int i = 0; i < sz; i++) {
            str[i] = tolower(str[i]);
            cout << str[i];
        }
    }
    else if (tLower < tUpper) {
        for (int i = 0; i < sz; i++) {
            str[i] = toupper(str[i]);
            cout << str[i];
        }
    }
    else if (tLower == tUpper) {
        for (int i = 0; i < sz; i++) {
            str[i] = tolower(str[i]);
            cout << str[i];
        }
    }


    return 0;
}