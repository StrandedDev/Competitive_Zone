#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, l, r;
        cin >> n >> l >> r;
        long long ans = -1;


        vector<long long> divis;
        for (long long i = 1; i * i <= n; ++i) {

            if (n % i == 0) {
                if (i >= l && i <= r)
                    divis.push_back(i);
                long long other = n / i;
                if (other != i && other >= l && other <= r)
                    divis.push_back(other);
            }
        }


        if (!divis.empty())
            ans = *min_element(divis.begin(), divis.end());
        cout << ans << "\n";
    }
    return 0;
}
