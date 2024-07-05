#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        vector<int> res;
        // vector<int> temp;
        for (int i = 0; i < numRows; i++){
            vector<int> temp(res);
            res.clear();
            for (int j = 0; j <= i; j++){
                if(j==0 || i==j){res.push_back(1);
                }else{res.push_back(temp[j]+temp[j-1]);}
                // cout << res[j] << " ";
            }
            // cout << endl;
            // vector<int> temp(res);
            ans.push_back(res);
        }
        // for (int i = 2; i < numRows; i++){
        //     for ( int j = 1; j < numRows; j++){
        //         res[i][j] = res[i-1][j] + res[i-1][j-1];
        //     }
        // }
        return ans;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
 
    int n; cin >> n;
    vector<vector<int>> ans = generate(n);
    for (int i = 0; i < ans.size(); i++){
        for (int j = 0; j < ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    


    return 0;
}