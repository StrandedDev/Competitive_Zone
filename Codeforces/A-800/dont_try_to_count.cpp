#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main() {
    optimize();


    int t, n, m;
    string str, sb;

    cin >> t;

    while(t--){
        cin >> n >> m >> str >> sb;


        int cnt = 0;
        bool found = 0;

        for(int i = 0; i < 10; i++){
            if(str.find(sb) != -1){
                found = 1;
                break;
            }
            else{
                found = 0;
            }

            str += str;
            cnt++;
        }

        cout << (found ? cnt : -1) << endl;

    }


    return 0;
}
