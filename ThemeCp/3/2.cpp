#include <bits/stdc++.h>

using namespace std;

void solve(){
    int a,b; cin >> a >> b;

    int ans = 0;

    for(int i = a; i <= b; i++){
        if(i % 2 == 1) ans++;
    }

    cout << ans/2 << endl;
}

int main(){
    int tt; cin >> tt;

    while(tt--){
        solve();
    }
}
