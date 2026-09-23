#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main() {
	optimize();
	
	
    int t, a, b, c;
    cin >> t;
    
    while(t--){
        cin >> a >> b >> c;
        
        if (a > b) cout << "First" << endl;
        else if (b > a) cout << "Second" << endl;
        else if (a == b){
            if (c%2 == 0) cout << "Second" << endl;
            else cout << "First" << endl;
        }
        
    }
    
    
    return 0;
}
