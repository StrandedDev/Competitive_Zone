#include <bits/stdc++.h>
using namespace std;

int main() {

    int t, n;
    string inp, tar;

    cin >> t;

    while(t--){
        cin >> n;

        cin >> inp >> tar;

        sort(inp.begin(), inp.end());
        sort(tar.begin(), tar.end());


        if(inp == tar){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }

    }

    return 0;
}
