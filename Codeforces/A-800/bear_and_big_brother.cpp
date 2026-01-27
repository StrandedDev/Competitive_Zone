#include <bits/stdc++.h>
using namespace std;


int main() {
    int a, b;

    cin >> a >> b;

    int i = 1;
    while(true){
        if(a * pow(3, i) > b * pow(2,i)){
            cout << i << endl;
            break;
        }
        i++;
    }

    return 0;
}