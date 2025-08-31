#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll soma(vector<ll>& a){
    ll ans = a.size();

    ans += *max_element(a.begin(),a.end());

    return ans;
}

void solve(){
    ll n; cin >> n;
    vector<ll> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];
    
    if(a.size() == 1){
        cout << a[0] + 1 << endl;
        return;
    }

    vector<ll> b,c;

    for(ll i = 0; i < n; i += 2){
        b.push_back(a[i]);
    }

    for(ll i = 1; i < n; i+= 2){
        c.push_back(a[i]);
    }
    
    int somaB = soma(b);
    int somaC = soma(c);
    cout << (somaB > somaC ? somaB : somaC) << endl;

}

int main(){
    int tt; cin >> tt;

    while(tt--){
        solve();
    }
}
