#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main() {
	optimize();
	
	
    int t, n;
    cin >> t;
    
    while(t--){
        int flag = false;
        cin >> n;
        
        vector<int> arr(n);
        
        for(int i = 0; i < n; i++) cin >> arr[i];
        
        sort(arr.begin(), arr.end());

        for(int i = 0; i < n-2; i++){
            if(arr[i] == arr[i+1] && arr[i+1] == arr[i+2]){
                cout << arr[i] << endl;
                flag = true;
                break;
            }
        }
        
        if(!flag) cout << -1 << endl;
        
    }
    
    
    return 0;
}
