#include <bits/stdc++.h>

using namespace std;

//Jeito 1 : )(   (((())))
//Jeito 2 : (( | )) ()()()   

void Caso1(int n){

    string ans = "";

    for(int i = 0; i < n; i++) ans += '(';
    for(int i = 0; i < n; i++) ans += ')';

    cout << ans << endl;
}

void Caso2(int n){
    string ans = "";

    for(int i = 0; i < n; i++){
        ans += "()";
    }

    cout << ans << endl;
}


void solve(){
    string str; cin >> str;
        
    if(str == "()"){
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;

    int n = str.length();

    bool caso1 = false,caso2 = false;

    for(int i = 1; i < n; i++){
        char c = str[i-1];
        char d = str[i];

        if(c == ')' && d == '('){
            caso1 = true;
        }

        if( (c == '(' && d == '(') || (c == ')' && d == ')') ){
            caso2 = true;
        }
    }

    if(caso1){
        Caso1(n);
        return;
    }

    if(caso2){
        Caso2(n);
        return;
    }


}

int main(){
    int tt; cin >> tt;

    while(tt--){
        solve();
    }
}
