#include <bits/stdc++.h>

using namespace std;

    bool busca(vector<int>& a,int b){
        for(int i = 0; i < a.size(); i++){
            if(a[i] == b) return true;
        }

        return false;
    }

    bool bingo(vector<vector<int>>&  mat, vector<int>& a){
        bool ans = false;

        for(int i = 0; i < 3; i++){
            bool temp = true;
            for(int j = 0; j < 3; j++){
                temp = temp & busca(a,mat[i][j]);
            }
            if(temp) ans = true;
        }

        if(ans) return true;
        
        for(int i = 0; i < 3; i++){
            bool temp = true;

            for(int j = 0; j < 3; j++){
                temp = temp & busca(a,mat[j][i]);
            }
            if(temp) ans = true;
        }

        if(ans) return true;
        
        int temp = true;

        for(int i = 0; i < 3; i++){
            temp = temp & busca(a,mat[i][i]);
        }

        if(temp) ans = true;
        if(ans) return true;

        return  busca(a,mat[0][2]) && busca(a,mat[1][1]) && busca(a,mat[2][0]);
    }

int main(){
    vector<vector<int>> mat(3, vector<int> (3));

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> mat[i][j];
        }
    }

    int n; cin >> n;

    vector<int> a(n);

    for(int i = 0; i < n; i++) cin >> a[i];

    cout << (bingo(mat,a) ? "Yes" : "No") << endl;
    
    return 0;
}
