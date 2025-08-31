#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve(){
    ll n; cin >> n;
    vector<ll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    ll posMaior = max_element(a.begin(),a.end()) - a.begin();
    ll posMenor = min_element(a.begin(),a.end()) - a.begin();

    ll maior = a[posMaior];
    ll menor = a[posMenor];

    ll quantMaior = 1;
    ll quantMenor = 1;
    
    if(maior - menor == 0){
        cout <<  n * (n-1) << endl;
        return;
    }

    for(int i = 0; i < n; i++){
        if(i != posMaior){
            if(a[i] == maior) quantMaior++;
        }

        if(i != posMenor){
            if(a[i] == menor) quantMenor++;
        }
    }
    ll ans = 2 * quantMaior * quantMenor;
    cout << ans << endl;

    
}

int main(){
    
    int tt; cin >> tt;

    while(tt--){
        solve();
    }
    
}
