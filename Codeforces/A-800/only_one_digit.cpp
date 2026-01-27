
#include <bits/stdc++.h>
using namespace std;


int main(){

    int t;
    cin >> t;


    while(t--){
        int x;
        cin >> x;

        int ans = INT_MAX;


        while(x!=0){
            int temp = x%10;
            ans = min(ans,temp);
            x /= 10;
        }


        cout << ans << endl;

    }



    return 0;

}