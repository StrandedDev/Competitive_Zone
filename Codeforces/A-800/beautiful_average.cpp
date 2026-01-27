#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, x;
    cin >> t;


    while(t--){
        cin >> n;


        int arr[n];

        for(int i = 0; i < n; i++){
            cin >> x;
            arr[i] = x;
        }

        int end = sizeof(arr) / sizeof(arr[0]);

        sort(arr, arr+end);


        cout << arr[end-1] << endl;

    }




    return 0;
}
