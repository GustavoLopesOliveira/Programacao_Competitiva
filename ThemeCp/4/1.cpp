#include <bits/stdc++.h>

using namespace std;

void solve(){

    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    vector<int> b(n);

    if(a[0] == 1) b[0] = 2;
    else b[0] = 1;

    for(int i = 1; i < n; i++){
        if(a[i] == b[i-1] + 1){
            b[i] = b[i-1] + 2;
        }else{
            b[i] = b[i-1] + 1;
        }
    }

    cout << b[n-1] << endl;
}

int main(){
    int tt; cin >> tt;

    while(tt--){
        solve();
    }

}
