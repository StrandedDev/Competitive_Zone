#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    int n;
    int value = 0;
    string inp;
 
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> inp;
        if(inp == "++X" || inp == "X++" || inp == "++x" || inp == "x++"){
            value++;
        }else{
            value--;
        }
    }
 
    cout << value << endl;
 
    return 0;
}