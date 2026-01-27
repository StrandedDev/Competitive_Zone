#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> arr;


    int x;
    while(cin >> x){
        arr.push_back(x);
    }


    sort(arr.begin(), arr.end(), greater<int>());


    int sum = 0, step = 0;

    for(int i = 0; i <= 11; i++){

        if(sum >= n){
            break;
        }
        else{
            if(arr[i] >= arr[i+1]){
                sum += arr[i];
                step++;
            }
        }

    }


    if(sum < n){
        cout << -1 << endl;
    }else{
        cout << step << endl;
    }


    return 0;
}
