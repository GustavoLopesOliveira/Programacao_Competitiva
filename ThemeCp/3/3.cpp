#include <bits/stdc++.h>

using namespace std;

void solve(){

    int n; cin >> n;

    string str; cin >> str;

    int ans = 0;

    for(int i = 2; i < n; i++){
        char a = str[i-2],b = str[i-1],c = str[i];

        if(a == 'm' && b == 'a' && c == 'p') ans++;
        if(a == 'p' && b == 'i' && c == 'e') ans++;
    }

    for(int i = 4; i < n; i++){
        char a = str[i-4];
        char b = str[i-3];
        char c = str[i-2];
        char d = str[i-1];
        char e = str[i];

        if(a == 'm' && b == 'a' && c == 'p' && d == 'i' && e == 'e') ans--;
    }

    cout << ans << endl;

}

int main(){

    int tt; cin >> tt;

    while(tt--){

        solve();
    }
}
