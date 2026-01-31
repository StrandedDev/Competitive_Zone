#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main() {
    optimize();

    int n;
    cin >> n;

    int sum = (n * (n+1))/2;

    vector<int> arr;

    for(int i = 1; i <= n; i++) arr.push_back(i);

    if(sum % 2 != 0) cout << "NO" << endl;
    else{
        vector<int> arr1, arr2;
        long long sum1 = 0, sum2 = 0;
        cout << "YES" << endl;

        for (int i = n; i >= 1; i--) {
            if (sum1 <= sum2) {
                arr1.push_back(i);
                sum1 += i;
            } else {
                arr2.push_back(i);
                sum2 += i;
            }
        }


        sort(arr1.begin(), arr1.end());
        sort(arr2.begin(), arr2.end());

        cout << arr1.size() << endl;
        for(auto i : arr1) cout << i << " ";
        cout << endl;

        cout << arr2.size() << endl;
        for(auto i : arr2) cout << i << " ";

    }

    return 0;
}
