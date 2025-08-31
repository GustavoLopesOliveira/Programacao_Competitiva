#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,l,r; cin >> n >> l >> r;
    string str; cin >> str;

    bool ans = true;

    for(int i = l-1; i < r; i++){
        if(str[i] != 'o') ans = false;
    }

    cout << (ans ? "Yes" : "No") << endl;
}
