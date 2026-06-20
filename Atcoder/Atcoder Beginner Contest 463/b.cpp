#include <bits/stdc++.h>

using namespace std;

int charToInt(char c){
    if(c == 'A') return 0;
    if(c == 'B') return 1;
    if(c == 'C') return 2;
    if(c == 'D') return 3;
    if(c == 'E') return 4;
    return -1;
}

int main(){
    int n;
    char x;
    cin >> n >> x;
    vector<string> s(n);

    bool ans = false;
    for(int i = 0; i < n; i++) cin >> s[i];

    int column = charToInt(x);
    for(int i = 0; i < n; i++){
        //cout << s[i][column] << " "<< column << endl;
        if(s[i][column] == 'o'){
            ans = true;
            break;
        }
    }



    cout << ((ans) ? "Yes\n" : "No\n");

}