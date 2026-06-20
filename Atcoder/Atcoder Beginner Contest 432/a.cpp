#include <bits/stdc++.h>

using namespace std;

int main(){
    int a,b,c; cin >> a >> b >> c;

    int maior = max({a,b,c});
    int menor = min({a,b,c});
    int meio = a + b + c - maior - menor;

    int ans = maior * 100 + meio * 10 + menor;
    
    cout << ans << endl;
}
