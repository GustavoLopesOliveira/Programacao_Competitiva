#include <bits/stdc++.h>

using namespace std;


void solve(){
    string str; cin >> str;
    char c = str[0];
    int n = (int) str[1] - '0';

    string letters = "abcdefgh";

    for(int i = 1; i <= 8; i++){
        if(i != n){
            cout << c << i << endl;
        }
    }

    for(int i = 0; i < letters.length(); i++){
        if(c != letters[i]){
            cout << letters[i] << n << endl;
        }
    }

}


int main(){
    
    int tt; cin >> tt;

    while(tt--){
        solve();
    }

}
