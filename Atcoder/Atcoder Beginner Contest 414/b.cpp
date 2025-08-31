#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ll n; cin >> n;

    vector<pair<char,ll>> a(n);

    for(int i = 0; i < n; i++){
        char c;
        ll d;

        cin >> c >> d;
        a[i] = {c,d};
    }

    ll tam = 0;

    for(ll i = 0; i < n; i++){
        tam += a[i].second;
        if(tam > 100){
            cout << "Too Long" << endl;
            return 0;
        }
    }

    for(ll i = 0; i < n; i++){
        int j = a[i].second;
        char c = a[i].first;
        for(int k = 0; k < j; k++){
            cout << c;
        }   

    }

    cout << endl;


}
