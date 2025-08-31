#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,l,r; cin >> n >> l >> r;

    vector<pair<int,int>> a(n);

    for(int i = 0; i < n; i++){
        int b,c; cin >> b >> c;
        a[i] = {b,c};
    }

    int ans = 0;

    for(int i = 0; i < n; i++){
        int b = a[i].first, c = a[i].second;

        if(b <= l && c >= r ) ans++;
    }

    cout << ans << endl;
}
