#include <bits/stdc++.h>
using namespace std;

int main() {

    string str;
    cin >> str;

    int maximum = 1;
    int cmx = 1;

    for(int i = 0; i < str.length() - 1; i++){

        if(str[i] == str[i+1]){
            cmx++;
            maximum = max(maximum, cmx);
        }
        else if(str[i] != str[i+1]){
            cmx = 1;
        }
    }

    cout << maximum << endl;

    return 0;
}