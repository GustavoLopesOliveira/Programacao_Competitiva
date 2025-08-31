#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

//Gustavo Lopes Oliveira

void solve(){
    ll n; cin >> n; 
    ll ans = 1;

    while(ans * 2 <= n){
        ans = ans * 2;
    }

    cout << ans << endl;
}

int main(){
    int tt; cin >> tt;

    while(tt--){
        solve();
    }
}
