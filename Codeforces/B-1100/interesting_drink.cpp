#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q, cnt = 0;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    cin >> q;

    for(int i = 0; i < q; i++){
        int m;
        cin >> m;

        int left = 0, right = n - 1;
        int mid;

        while (left <= right)
        {
            mid = (left + right) / 2;
            if (arr[mid] <= m)
            {
                cnt=mid+1;
                left = mid + 1;
            }

            else
            {
                right = mid - 1;

            }
        }

        cout << cnt << endl;
        cnt = 0;
    }


    return 0;
}
