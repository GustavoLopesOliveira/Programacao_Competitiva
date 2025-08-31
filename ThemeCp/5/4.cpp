#include <bits/stdc++.h>

using namespace std;

int diagonal(vector<vector<int>>&a , int n){
    int m = 1;

    for(int i = 0; i < n; i++){
        m = min(m,a[i][i]);
    }

    return m;
}

void solve(){
    int n; cin >> n;

    vector<vector<int>> a(n, vector<int> (n));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }

    int ans = 0;

    for(int i = 0; i < n; i++){
        int rest = diagonal(a,i+1);
        if(rest < 0) ans += abs(rest);
    }

    cout << ans << endl;
}

int main(){
    int tt; cin >> tt;

    while(tt--){
        solve();
    }
}
