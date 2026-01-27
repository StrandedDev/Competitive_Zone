#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, num;
    cin >> t;

    vector<int> arr;

    while(t--){
        cin >> num;
        arr.push_back(num);
    }

    int counter = 0;

    for(int i = 0; i < arr.size(); i++){
        if(arr[i] != arr[i-1]){
            counter++;
        }
    }

    cout << counter << endl;

    return 0;

}
