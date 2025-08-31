#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll pote (ll a, ll b){
    if(b == 0) return 1;
    if(b == 1) return a;
    return a * pote(a,b-1);
}

ll rev(ll num){
    ll ans = 0;
    
    vector<ll> digits;

    while(num > 0){
        digits.push_back(num%10);
        num = num/10;
    }

    //reverse(digits.begin(),digits.end());

    for(ll i = 0; i < digits.size(); i++){
        //int b = ans;
        ans += digits[digits.size() - 1 - i] * pote(10,i);
        //cout << ans - b << " ";
    }
    //cout << endl;

    

    return ans;
}

ll fib(ll a1, ll a2){
    ll vet[11];
    vet[1] = (a1);
    vet[2] = (a2);

    for(ll i = 3; i < 11; i++){
        vet[i] = rev(vet[i-2] + vet[i-1]);
       // cout << vet[i] << " ";
    }

    return vet[10];
}

int main(){

    ll x,y; cin >> x >> y;
    
    cout << fib(x,y) << endl;
}
