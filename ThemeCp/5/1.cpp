#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n,k; cin >> n >> k;
    vector<char> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    int ans = 0;

    for(int i = 0; i < n; i++){
        if(a[i] == 'B'){
            ans++;
            i += k -1;
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
