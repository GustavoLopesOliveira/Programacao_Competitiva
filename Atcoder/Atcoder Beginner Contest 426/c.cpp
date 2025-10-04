#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){

    ll n, q; cin >> n >> q;

    vector<ll> vet(n);

    for(ll i = 0; i < n; i++) vet[i] = 1;

    for(ll i = 0; i < q; i++){
        ll a,b;
        cin >> a >> b;
        a--;b--;

        ll ans = 0;
        for(ll j = a; j >= 0; j--){
            if(vet[j] != 0){
                ans += vet[j];
                vet[j] = 0;
            }else{
                j = -1;
            }
        }
        vet[b] += ans;
        cout << ans << endl;
    }


}
