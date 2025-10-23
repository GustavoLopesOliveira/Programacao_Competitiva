#include <bits/stdc++.h>

using namespace std;

int f(int number){
    if(number < 10) return number;
    return (number % 10 + f(number/10));
}

int A(int n){
    
    int vet[n];
    vet[0] = 1;
    vet[1] = 1;

    for(int j = 1; j < n; j++){
        vet[j] = vet[j-1] + f(vet[j-1]);
    }

    return vet[n-1];
}


int main(){
    int n; cin >> n;
    int ans = A(n);
    cout << ans << endl;

}
