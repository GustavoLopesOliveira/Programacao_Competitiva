#include <bits/stdc++.h>

using namespace std;

double media(vector<double> nums){
    double soma = 0;
    for(double num : nums) soma += num;
    return (soma/nums.size());
}

int main(){
    int n,m; cin >> n >> m;
    
    map<int,vector<double> > ma;

    for(int i = 0; i < n; i++){
        int a,b; cin >> a >> b;
        ma[a].push_back(b);

    }
    
    cout <<fixed <<setprecision(16) << endl;

    for(pair<int,vector<double>> mi : ma){
        cout << media(mi.second) << endl;
    }
}
