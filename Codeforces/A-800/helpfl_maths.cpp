#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    string str;
    cin >> str;
 
    int sz = str.size();
    int arr[sz];
 
 
    for(int i = 0; i < sz; i++) {
        if (str[i] != '+') {
            arr[i] = str[i] - '0';   // Converts char array to int array
        }else {
            arr[i] = 0;
        }
    }
 
    sort(arr, arr+sz);
 
    for(int i = 0; i < sz; i++) {
        if (arr[i] != 0) {
            cout << arr[i];
            if (i < sz - 1) {
                cout << "+";
            }
        }
    }
 
 
    return 0;
}