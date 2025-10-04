#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,char> pic;
#define f first
#define s second

void solve(){
    ll n; cin >> n;
    string str; cin >> str;

    vector<pic> bits;
    ll cont = 1;
    
    for(ll i = 1; i < str.length(); i++){
        char c1 = str[i];
        char c2 = str[i-1];

        if(c1 == c2){
            cont++;
        }else{
            bits.push_back({cont,c2});
            cont  = 1;
        }
    }

    bits.push_back({cont,str[str.length()-1]});
   // for(int i = 0 ;i < bits.size(); i++) cout  << bits[i].f << " " <<bits[i].s << endl;
   // cout << endl;
    pic max_pair = {-1,'c'};
    ll index_max_pair = -1;

    for(ll i = 0; i < bits.size(); i++){
        if(bits[i].f > max_pair.f){
            max_pair = {bits[i].f,bits[i].s};
            index_max_pair = i;
        }
    }

    ll ans = 0;

    for(ll i = 0; i < bits.size(); i++){
        if(i != index_max_pair){
            if(bits[i].second == max_pair.second){
                ans += bits[i].f * 2;
            }else{
                ans += bits[i].f;
            }
        }
    }

    cout << ans << endl;

}

int main(){
    ll t; cin >> t;

    while(t--){
        solve();
    }
}
