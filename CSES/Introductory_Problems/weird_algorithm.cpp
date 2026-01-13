#include <bits/stdc++.h>
using namespace std;

int main() {

    long long int n;
    cin >> n;
    cout << n << " ";

    while(true){
        if (n == 1){
            break;
            cout << 1 << " ";
        }
        else if (n % 2 == 0){
            n /= 2;
            cout << n << " ";
        }
        else if ( n % 2 != 0 ) {
            n = (n * 3) + 1;
            cout << n << " ";
        }
    }

    cout << endl;

    return 0;
}
