#include <bits/stdc++.h>
using namespace std;

vector<int> binarySearch(int el,vector<vector<int>> & arr){
    int n = arr.size();
    int m = arr[0].size();
    int i = 0;
    int j = m - 1;
    while(i >= 0 && i < n && j >= 0 && j < m){
        if(arr[i][j] == el){return {(i,j)};}
        else if(arr[i][j] > el){j--;}
        else if(arr[i][j] < el){i++;}
    }

    return {(-1,-1)};
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("../error.txt", "w", stderr);
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    #endif
    int t; cin >> t;
    while(t--){
        int n,m; cin >> n >> m;
        vector<vector<int>> arr(n,vector<int>(m));
        int k =0;
        long long size = n*m;
        vector<int> res(size);
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                cin >> arr[i][j];
                res[k] = arr[i][j];
                k++;
            }
        }
        // for (int i = 0; i < n; i++){
        //     for (int j = 0; j < m; j++){
        //         cout << arr[i][j] << " ";
        //     }cout << endl;
        // }
        
        sort(res.begin(),res.end());
        // for (int i = 0; i < res.size(); i++)
        // {
        //     cout << res[i] << " ";
        // }
        int el = res[k/2];
        cout << el << endl;
        // vector<int> pos3 = binarySearch(el,arr);
        // cout << pos3[0] << " " << pos3[1] << '\n';
    }
    return 0;
}