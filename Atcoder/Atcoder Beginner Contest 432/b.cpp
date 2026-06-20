#include <bits/stdc++.h>

using namespace std;

void swap(vector<int>& array, int i , int j){
    int tmp = array[i];
    array[i] = array[j];
    array[j] = tmp;
}

int minDigit(vector<int>& list){
    int menor = 1e9;
    int pos = 0;

    for(int i = 0; i < list.size(); i++){
        if(list[i] != 0 and menor >= list[i]){
            menor = list[i];
            pos = i;
        }
    }

    return pos;
    
}

vector<int> digits2(int x){
    vector<int> digits;
    
    do{
        digits.push_back(x%10);
        x = x/10;
    }while(x != 0);

    sort(digits.begin(),digits.end());
    reverse(digits.begin(),digits.end());
    return digits;
}

int main(){
    int x; cin >> x;
    
    int ans = 0;

    vector<int> digits = digits2(x);
    
    int minDigi = minDigit(digits);

    swap(digits,minDigi,digits.size()-1);


    int contador = 1;

    for(int digit : digits){
        ans += digit * contador;
        contador *= 10;
    }

    cout << ans << endl;


}
