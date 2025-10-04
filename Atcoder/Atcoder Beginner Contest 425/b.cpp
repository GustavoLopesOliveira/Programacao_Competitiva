#include <bits/stdc++.h>

using namespace std;

stack<int> hashToStack(unordered_map<int,bool> map){
    stack<int> ans;

    for(pair<int,bool>  data : map){
        if(data.second == false){
            ans.push(data.first);
        }
    }
    return ans;
}

int main(){

    int n; cin >> n;
    vector<int> a(n);
    
    unordered_map<int,bool> hash;
    //O(n)
    for(int i = 1; i<= n; i++) hash[i] = false;
    
    //O(n)
    for(int i = 0; i < n; i++){
         cin >> a[i];
    }
         

    for(int i = 0; i < n; i++){
        int valor = a[i];
        if(hash[a[i]] == true){
            cout << "No" << endl;
            return 0;
        }
        if(valor != -1)hash[a[i]] = true;
    }
    
    stack<int> duracell = hashToStack(hash);

    for(int i = 0; i < n; i++){
        if(a[i] == -1){
            a[i] = duracell.top();
            duracell.pop();
        }
    }
    
    cout << "Yes" << endl;

    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }

    cout << endl;

}
