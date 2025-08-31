#include <bits/stdc++.h>

using namespace std;

void solve(){
    int k,n; cin >> k >> n;
    vector<int> a(n);
    
    for(int i = 0; i < n; i++) cin >> a[i];
    
    int pos = max_element(a.begin(),a.end()) - a.begin();
    int ans = 0;

    for(int i  = 0; i < n; i++){
        if(i != pos){
            ans += a[i];
            if(a[i] != 1) ans += a[i] - 1;
        }
    }

    cout << ans << endl;
}


int main(){
    int tt; cin >> tt;

    while(tt--){
        solve();
    }
}
