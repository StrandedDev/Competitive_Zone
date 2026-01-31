#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    optimize();

    int t, x;
    cin >> t;

    set<int> st;

    while(t--){
        cin >> x;
        st.insert(x);
    }

    cout << st.size() << endl;

    return 0;
}
