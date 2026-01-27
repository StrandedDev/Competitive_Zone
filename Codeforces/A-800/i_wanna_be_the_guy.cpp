#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    set<int> completed_levels;


    int count;
    cin >> count;
    while(count--) {
        int level;
        cin >> level;
        completed_levels.insert(level);
    }


    cin >> count;
    while(count--) {
        int level;
        cin >> level;
        completed_levels.insert(level);
    }


    bool covered = true;
    for(int i = 1; i <= n && covered; i++) {
        if(completed_levels.find(i) == completed_levels.end()) {
            covered = false;
        }
    }

    cout << (covered ? "I become the guy." : "Oh, my keyboard!") << endl;

    return 0;
}