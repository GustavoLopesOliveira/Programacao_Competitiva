#include <bits/stdc++.h>

using namespace std;

void solve(){

    int n; cin >> n;
    vector<pair<int,int>> a(n);

    for(int i = 0; i < n; i++){
        int b,c; cin >> b >> c;
        a[i] = {b,c};
    }   

    bool up = false ,down = false,rigth = false,left = false;

    for(int i = 0; i < n; i++){
        int x = a[i].first;
        int y = a[i].second;
        if(x > 0) rigth = true;
        if(x < 0) left = true;
        if(y > 0) up = true;
        if(y < 0) down = true;
    }

    cout << (!(up && down && rigth && left) ? "Yes" : "No")  << endl;
}

int main(){
    int tt; cin >> tt;

    while(tt--){
        solve();
    }
}
