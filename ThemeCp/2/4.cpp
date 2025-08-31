#include <bits/stdc++.h>

using namespace std;

int gdc(int a, int b){
    if(b == 0) return a;
    return gdc(b,a%b);
}

void solve(){
    int n; cin >> n;
    int temp = 0;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
        temp = gdc(temp,a[i]);
    }
    
    cout << a[n-1]/temp << endl; 
}

int main(){
    int tt; cin >> tt;

    while(tt--){
        solve();
    }
}
