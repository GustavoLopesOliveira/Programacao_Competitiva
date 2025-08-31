#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    vector<string> a(n);

    for(int i = 0; i < n; i++) cin >> a[i];

    int pos; cin >> pos;
    string str; cin >> str;

    cout << ( a[pos-1] == str ? "Yes" : "No") << endl;
}
