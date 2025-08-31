#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    
    ll h,w; cin >> h >> w;
    
    ll ans = (h * w + 1) / 2;
    if(h == 1 || w == 1) ans = 1;
    cout << ans << endl;
}
