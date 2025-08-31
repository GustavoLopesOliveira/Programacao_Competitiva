#include <bits/stdc++.h>

using namespace std;

bool isPossible(string str1, string str2){
    int tam1 = str1.length();
    int tam2 = str2.length();
    
    if(tam2 == 1){
        for(int i = 0; i < tam1; i++){
            if( str1[i] == str2[0]) return true;
        }
        return false;
    }

    int j = 1;

    for(int i = tam1 - tam2 + 1;i < tam1; i++){
        char c1 = str1[i];
        char c2 = str2[j];

        if( c1 != c2) return false;
        j++;
    }   

    for(int i = 0; i < tam1 - tam2 + 1; i++){
        char c = str2[0];
        if(str1[i] == c) return true;
    }

    return false;
}

void solve(){
    int n,m; cin >> n >> m;

    string str1,str2; cin >> str1 >> str2;

    cout << (isPossible(str1,str2) ? "Yes" : "No") << endl;
}

int main(){
    int tt; cin >> tt;

    while(tt--){
        solve();
    }
}
