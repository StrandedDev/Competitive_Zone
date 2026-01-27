#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;


    for(int i = 0; i < y; i++){

        if(x%10 > 0){
            x -= 1;
        }
        else if(x%10 == 0){
            x /= 10;
        }

    }

    cout << x << endl;

    return 0;
}
