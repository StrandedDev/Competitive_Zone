#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main() {
	optimize();
	
	
    int t, a, b, c, n;
    cin >> t;
    
    while(t--){
        cin >> a >> b >> c >> n;
        
        int total = a+b+c+n;
        
        if(total%3 != 0){
            cout << "NO" << endl;
        }else{
            if(a > total/3 || b > total/3 || c > total/3){
                cout << "NO" << endl;
            }else{
                cout << "YES" << endl;
            }
        }                
        
    }
    
    
    return 0;
}
