#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

typedef struct teste{
    ll t;
    ll l;
    ll u;
}teste;


void solve(){
    int n,h; cin >> n >> h;
    
    vector<teste> a(n);

    for(ll i = 0; i < n; i++){
        ll t,l,u; cin >> t >> l >> u;

        teste tes;
        tes.t = t;
        tes.l = l;
        tes.u = u;

        a[i] = tes;
    }

    // ------------------------------------



}



int main(){
    int tt; cin >> tt;

    while(tt--){
        solve();
    }
}
