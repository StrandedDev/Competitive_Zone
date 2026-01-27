#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    int total = 0;
    string name;
    cin >> t;

    while(t--){
        cin >> name;

        if(name == "Tetrahedron") total += 4;
        else if(name == "Cube") total += 6;
        else if(name == "Octahedron") total += 8;
        else if(name == "Dodecahedron") total += 12;
        else if(name == "Icosahedron") total += 20;

    }

    cout << total << endl;


}
