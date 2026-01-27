#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string str;
    int a = 0, d = 0;

    cin >> n >> str;


    for(int i = 0; i < n; i++){
        if(str[i] == 'A'){
            a++;
        }
        else if(str[i] == 'D'){
            d++;
        }
    }


    if(a > d){
        cout << "Anton" << endl;
    }
    else if(d > a){
        cout << "Danik" << endl;
    }
    else if(a == d){
        cout << "Friendship" << endl;
    }



    return 0;

}
