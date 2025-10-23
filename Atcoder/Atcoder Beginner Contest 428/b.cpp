#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,k; cin >> n >> k;
    string str; cin >> str;

    vector<string> words;

    for(int i = 0; i < n; i++){
        string tmpr = "";
        tmpr +=  str[i];
        
        for(int j = i+1; j < i + k; j++){
            tmpr += str[j];
        }
        words.push_back(tmpr);
    }

    //for(string a : words){
    //    cout << a << endl;
    //}
    
    map<string,int> m;

    for(string word : words){
        m[word]++;
    }

    int int_max = 0;

    for(pair<string,int> tupla : m){
       // cout << tupla.first << " "<< tupla.second << endl;
        int_max = max(int_max, tupla.second);
    }

    vector<string> ans;

    for(pair<string,int> tupla : m){
        if(tupla.second == int_max){
            ans.push_back(tupla.first);
        }
    }

    cout << int_max << endl;

    for(string an : ans){
        cout << an << " ";
    }

    cout << endl;

}
