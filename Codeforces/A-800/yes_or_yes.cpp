#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    string str;

    while(t--){
        cin >> str;

        if(tolower(str[0]) == 'y' && tolower(str[1]) == 'e' && tolower(str[2]) == 's'){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }

    }

    return 0;
}
