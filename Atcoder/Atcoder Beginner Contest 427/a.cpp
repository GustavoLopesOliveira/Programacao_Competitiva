#include <bits/stdc++.h>

using namespace std;

int main(){
    string str; cin >> str;

    for(int i = 0; i < str.length(); i++){
        if(i != (str.length() - 1)/2){
            cout << str[i];
        }
    }

    cout << endl;
}
