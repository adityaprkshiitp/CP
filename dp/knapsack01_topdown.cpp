#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vec;

// 2d vector space comeplexity
ll knapsack(vec weight, vec value, ll w, ll n){

    // initialize array
    // ll dp[n+1][w+1];
    // for (int i = 0; i < n+1; i++){
    //     for (int j = 0; j < w + 1; j++){
    //         if(i == 0 || j == 0){dp[i][j] = 0;}
    //     }
    // }
    // initialize vector
    vector<vec> dp(n + 1, vec (w + 1, 0));

    // filling table or choice diagram
    for (int i = 1; i < n+1; i++){
        for (int j = 1; j < w + 1; j++){
            if(weight[i-1] > j){
                dp[i][j] = dp[i-1][j];
            }else{
                dp[i][j] = max(value[i-1] + dp[i-1][j-weight[i-1]],dp[i-1][j]);
            }
        }
    }

    for (int i = 0; i < n+1; i++){
        for (int j = 0; j < w + 1; j++){
            cout << dp[i][j] << " ";
        }cout << endl;
    }
    cout << endl;
    return dp[n][w];
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../error.txt", "w", stderr);
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    #endif
    int t; cin >> t;
    while(t--){
        ll n,temp; cin >> n;
        ll w; cin >> w;
        vec weight;
        vec value;
        for (int i = 0; i < n; i++){
            cin >> temp;
            weight.push_back(temp);
        }
        for (int i = 0; i < n; i++){
            cin >> temp;
            value.push_back(temp);
        }
        ll res = knapsack(weight,value,w,n);
        cout << res << endl;
    }
    return 0;
}