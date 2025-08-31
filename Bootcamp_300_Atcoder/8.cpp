#include <bits/stdc++.h>

using namespace std;

int pote(int v,int exp){
    if(exp == 0) return 1;
    if(exp == 1) return v;
    return v * pote(v,exp-1);
}

int strToInt(string s1){
    int xp = 0, ans = 0;

    for(int i = s1.size() -1; i>= 0; i--){
        int c = (int) s1[i] - '0';
        ans += c * pote(10,xp);
        xp++;
    }

    return ans;
}

bool isSquare(string s1){
    
    int valor = strToInt(s1);
    double valorD = sqrt(valor);
    valor = valorD;
    
    return valor == valorD;
}

int main(){
    
    string s1,s2; cin >> s1 >> s2;

    s1 += s2;

    cout << (isSquare(s1) ? "Yes" : "No") << endl;
}
