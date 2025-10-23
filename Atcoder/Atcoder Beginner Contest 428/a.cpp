#include <bits/stdc++.h>

using namespace std;

int main(){

    int s,a,b,x; cin >> s >> a >> b >> x;

    int ans = 0;
    bool rest = true;

    int cont_corrida = 0;
    int cont_descanso = 0;

    for(int i = 1; i <= x; i++){
        
        if(cont_corrida >= a){
            rest = false;
            cont_corrida = 0;
        }

        if(cont_descanso >= b){
            rest = true;
            cont_descanso = 0;
        }

        if(rest){
            ans += s;
            cont_corrida++;
        }else{
            cont_descanso++;
        }
        
    }


    cout << ans << endl;
}
