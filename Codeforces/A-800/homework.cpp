#include <bits/stdc++.h>
using namespace std;


int main(){

    int t;

    cin >> t;

    while(t--){
        int n, m;
        string a, b, c;
        string strV = "";
        string strD = "";

        cin >> n >> a >> m >> b >> c;

        for(int i = 0; i < m; i++){
            if(c[i] == 'V'){
                strV = b[i] + strV;
            }else{
                strD += b[i];
            }
        }

        // Output
        cout << strV << a << strD << endl;

    }



    return 0;
}

