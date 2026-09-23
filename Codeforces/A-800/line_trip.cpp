#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

// get min and max values in an vector/array
// int min = *min_element(arr.begin(), arr.end());
// int max = *max_element(arr.begin(), arr.end());


int main() {
	optimize();
	
	
    int t, n, x;
    cin >> t;
    
    while(t--){
        cin >> n >> x;
        vector<int> arr(n);
        
        for(int i = 0; i < n; i++) cin >> arr[i];
        
        arr.insert(arr.begin() + 0, 0);
        
        int mx = 0;
        int last = (x - arr[n]) * 2;
        
        for(int i = 0; i < n; i++){
            if((arr[i+1] - arr[i]) >= mx) mx = arr[i+1] - arr[i];
        }
        
        cout << max(mx, last) << endl; 
        
        
    }
    
    
    return 0;
}
