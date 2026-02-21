#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main() {
	optimize();
	
	
    int n;
    cin >> n;
    
    vector<int> arr(5);
    
    for(int i = 0; i < n; i++) cin >> arr[i];
    
    sort(arr.begin(), arr.end(), greater<int>());
    
    int sum1 = arr[0], sum2 = arr[1];
    
    for(int i = 2; i < n; i++){
        (sum1 > sum2) ? sum2 += arr[i] : sum1 += arr[i];
    }
    
    cout << abs(sum1 - sum2) << endl;
    
    
    return 0;
}
