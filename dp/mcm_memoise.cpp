#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vec;

ll dp[1001][1001];
ll mcm(vec& arr, int i,int j){
    if(i >= j){
        return 0;
    }
    if(dp[i][j] != -1){
        return dp[i][j];
    }
    ll mini = INT_MAX;
    for (int k = i; k  <  j; k++){
        ll temp = mcm(arr,i,k) + mcm(arr,k+1,j) + arr[i-1]*arr[k]*arr[j];
        mini = min(mini,temp);
    }

    return dp[i][j] = mini;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../error.txt", "w", stderr);
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    #endif
    int t; cin >> t;
    while(t--){
        int n,temp; cin >> n;
        vec arr;
        for (int i = 0; i < n; i++){
            cin >> temp;
            arr.push_back(temp);
        }
        int i = 1;
        int j = n-1;
        ll res = mcm(arr,i,j);
        cout << res << endl;
    }
    return 0;
}