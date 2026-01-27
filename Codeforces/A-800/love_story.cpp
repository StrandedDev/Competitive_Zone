#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, count = 0;
    cin >> t;
    string  str;
    char chset[10] = {'c','o','d','e','f','o','r','c','e','s'};


    while(t--){
        cin >> str;

        for(int j = 0; j < 10; j++){
            if(str[j] != chset[j]) count++;
        }

        cout << count << endl;
        count = 0;
    }


    return 0;
}
