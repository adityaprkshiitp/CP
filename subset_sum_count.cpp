#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vec;

// 2d vector space comeplexity
ll knapsack(vec arr, ll sum, ll n){

    // initialize array
    ll dp[n+1][sum+1];
    for (int i = 0; i < n+1; i++){
        for (int j = 0; j < sum + 1; j++){
            if(i == 0){dp[i][j] = 0;}
            if(j == 0){dp[i][j] = 1;}
        }
    }
    // initialize vector
    // vector<vec> dp(n + 1, vec (sum + 1, 0));

    // filling table or choice diagram
    for (int i = 1; i < n+1; i++){
        for (int j = 1; j < sum + 1; j++){
            if(arr[i-1] > j){
                dp[i][j] = dp[i-1][j];
            }else{
                dp[i][j] = dp[i-1][j-arr[i-1]] + dp[i-1][j];
            }
        }
    }

    for (int i = 0; i < n+1; i++){
        for (int j = 0; j < sum + 1; j++){
            cout << dp[i][j] << " ";
        }cout << endl;
    }
    cout << endl;
    return dp[n][sum];
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t; cin >> t;
    while(t--){
        ll n,temp; cin >> n;
        ll sum; cin >> sum;
        vec arr;
        for (int i = 0; i < n; i++){
            cin >> temp;
            arr.push_back(temp);
        }
        // sort(arr.begin(),arr.end());
        ll res = knapsack(arr,sum,n);
        cout << res << endl;
    }
    return 0;
}