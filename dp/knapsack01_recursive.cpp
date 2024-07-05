#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vec;

ll knapsack(vec weight, vec value, int w, int n){
    if(n==0 || w==0){
        return 0;
    }

    if(weight[n-1] <= w){
        return (max(knapsack(weight,value,w,n-1),value[n-1] + knapsack(weight,value,w-weight[n-1],n-1)));
    }else{
        return knapsack(weight,value,w,n-1);
    }

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
        cout << res;
    }
    return 0;
}