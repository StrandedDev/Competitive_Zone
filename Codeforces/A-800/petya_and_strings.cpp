#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    string first, second;
    int result = 0;
 
    cin >> first >> second;
 
    for(int i = 0; i < first.size(); i++){
        first[i] = tolower(first[i]);
        second[i] = tolower(second[i]);
    }
 
 
   
    if(first == second){
        result = 0;
    }
    else if(first > second){
        result = 1;
    }
    else if(first < second){
        result = -1;
    }
 
 
    cout << result << endl;
 
 
    return 0;
}