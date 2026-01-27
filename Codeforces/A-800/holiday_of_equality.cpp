#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, a;
    cin >> t;

    int total = 0;
    vector<int> vec;

    while(cin >> a) vec.push_back(a);


    sort(vec.begin(), vec.end());

    for(int i : vec){
        if(i < vec.back()) total += vec.back() - i;
    }


    cout << total << endl;

    return 0;
}
