#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,m;
    cin >> n >> m;

    bool right = true;
    for (int j = 1; j <= n; j++){
        if (j%2 == 0 && right == true){
            for (int i = 1; i < m; i++){
                cout << ".";
            }
            cout << "#";
            right = false;
        }
        else if (j%2 == 0 && right == false){
            cout << "#";
            for (int i = 1; i < m; i++)
            {
                cout << ".";
            }
            right = true;
        }else{
            for (int i = 1; i <= m; i++){
                cout << "#";
            }
        }

        cout << endl;
    }



    
    return 0;
}