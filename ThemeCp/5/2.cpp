#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n,a,q; cin >> n >> a >> q;

    string str; cin >> str;
     
    int numM = 0,inicial = a;
    
    if(a == n){
        cout << "YES" << endl;
        return;
    }

    for(int i = 0; i < str.length(); i++){
        char c = str[i];

        if(c == '+'){
            a++;
            numM++;
        }
        if(c == '-') a--;

        if(a == n){
            cout << "YES" << endl;
            return;
        }

    }

    if(numM + inicial < n){
        cout << "NO" << endl;
    }else{
        cout << "MAYBE" << endl;
    }

    return;

    
}

int main(){
    int t; cin >> t;

    while(t--){
        solve();
    }

}
