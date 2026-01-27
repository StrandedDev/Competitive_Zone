#include <bits/stdc++.h>
using namespace std;

int main() {

    int t, n;



    cin >> t;


    while(t--){
        cin >> n;

        long long a[n];
        long long b[n];


        // input
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        for(int i = 0; i < n; i++){
            cin >> b[i];
        }



        long long minA = *min_element(a, a + n);
        long long minB = *min_element(b, b + n);

        long long cnt = 0;

        for(int i = 0; i < n; i++){

            if( (a[i] - minA) > (b[i] - minB) ){
                cnt += (a[i] - minA);
            }
            else{
                cnt += (b[i] - minB);
            }

        }

        cout << cnt << endl;



    }




    return 0;
}
