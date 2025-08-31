#include<bits/stdc++.h>

using namespace std;

void solve(){
    
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    int ans = a[n-1];
    int maior = a[0];

    for(int i = 1; i < n -1; i++){
        if(a[i] > maior){
            maior = a[i];
        }
    }

    ans += maior;

    cout << ans << endl;
}

int main(){

    int tt; cin >> tt;

    while(tt--){
        solve();
    }
}
