#include <bits/stdc++.h>

using namespace std;

int main(){

    string str1,str2; cin >> str1 >> str2;

    bool ans = false;

    if(str1 == "Ocelot"){
        if(str2 == "Ocelot"){
            ans = true;
        }
    }

    if(str1 == "Serval"){
        if(str2 == "Serval" or str2 == "Ocelot"){
            ans = true;
        }
    }

    if(str1 == "Lynx"){
         ans = true;
    }

    cout << (ans ? "Yes" : "No") << endl;
}
