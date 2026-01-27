#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    string inputStr;
    char a, b;
    int n, len;
 
    cin >> n;
 
    for(int i = 0; i < n; i++){
        cin >> inputStr;
        len = inputStr.size();
 
        if(len > 10){
            a = inputStr.front();
            b = inputStr.back();
 
            cout << a << (len-2) << b << endl;
        }
        else{
            cout << inputStr << endl;
        }
    }
 
 
    return 0;
}