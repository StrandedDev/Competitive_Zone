#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int num;
    cin >> num;
    int total = 0;


    while(true){
        if(num >= 100){
            total += floor(num/100);
            num = num%100;
        }
        else if(num >= 20 && num < 100){
            total += floor(num/20);
            num = num%20;
        }
        else if(num >= 10 && num < 20){
            total += floor(num/10);
            num = num%10;
        }
        else if(num >= 5 && num < 10){
            total += floor(num/5);
            num = num%5;
        }
        else{
            total += num;
            break;
        }
    }

    cout << total << endl;

    return 0;
}
