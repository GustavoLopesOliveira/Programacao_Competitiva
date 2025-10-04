#include <bits/stdc++.h>

using namespace std;

int  main(){

    string input; cin >> input;
    
    unordered_map<char,int> m;

    for(int i = 0; i < input.length(); i++){
        m[input[i]]++;
    }


    char minChar;
    int minValue = 1000;

    for(pair<char,int> pa : m){
        if(pa.second < minValue){
            minValue = pa.second;
            minChar = pa.first;
        }
    }

    cout << minChar << endl;
}
