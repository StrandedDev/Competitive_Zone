#include <bits/stdc++.h>
using namespace std;

int main() {

    long long int n, total = 0;
    cin >> n;

    vector<long long> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    long long max = arr[0];

    for(int i = 0; i < (n-1); i++){
        if(max < arr[i+1]){
            max = arr[i+1];
        }else{
            total += abs(max - arr[i+1]);
        }
    }

    cout << total << endl;
    return 0;
}