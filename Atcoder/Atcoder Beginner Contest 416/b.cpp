#include <bits/stdc++.h>

using namespace std;

int main(){
    string str; cin >> str;

    string ans = str ;
    
    bool teveJogo = true;

    for(int i = 0; i < str.size(); i++){
        char c = ans[i];

        if(c == '.' && teveJogo){
            ans[i] = 'o';
            teveJogo = false;
        }
        if(c == '#'){
            teveJogo = true;
        }
    }

    cout << ans << endl;
}
