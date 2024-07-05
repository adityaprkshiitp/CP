#include <bits/stdc++.h>
using namespace std;

// return index  vector of NSL
vector<int> NSL(int n, vector<int> arr){
    stack<pair<int,int>> s1;
    vector<int> res;
    for (int i = 0; i < n; i++){
        if(s1.size() == 0){res.push_back(-1);}
        else if(s1.size()>0 && s1.top().first < arr[i]){res.push_back(s1.top().second);}
        else if(s1.size()>0 && s1.top().first >= arr[i]){
            while(s1.size() > 0 && s1.top().first >= arr[i]){
                s1.pop();
            }
            if(s1.size() == 0){res.push_back(-1);}
            else{res.push_back(s1.top().second);}
        }
        s1.push({arr[i],i});
    }
    return res;
}

// return index vector of NSR
vector<int> NSR(int n, vector<int> arr){
    stack<pair<int,int>> s1;
    vector<int> res;
    for (int i = n-1; i >= 0; i--){
        if(s1.size() == 0){res.push_back(-1);}
        else if(s1.size()>0 && s1.top().first < arr[i]){res.push_back(s1.top().second);}
        else if(s1.size()>0 && s1.top().first >= arr[i]){
            while(s1.size() > 0 && s1.top().first >= arr[i]){
                s1.pop();
            }
            if(s1.size() == 0){res.push_back(-1);}
            else{res.push_back(s1.top().second);}
        }
        s1.push({arr[i],i});
    }
    reverse(res.begin(),res.end());
    return res;
}

int MAH(vector<int> arr){
    int n = arr.size();
    vector<int> res4 = NSR(n,arr);
    vector<int> res3 = NSL(n,arr);
    int maxi = 0;
    for (int i = 0; i < n; i++){
        maxi = max(maxi,(res4[i] - res3[i]-1)*arr[i]);
    }
    return maxi;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../error.txt", "w", stderr);
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    #endif
    int t; cin >> t;
    while (t--){
        int n,m; cin >> n >> m;
        vector<vector<int>> arr(n,vector<int>(m));
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                cin >> arr[i][j];
            }
        }
        vector<int> v;
        for (int i = 0; i < m; i++){
            v.push_back(arr[0][i]);
        }
        int maxi = MAH(v);
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                if(arr[i][j] == 0){
                    v[j] = 0;
                }else{
                    v[j] = v[j] + arr[i][j];
                }
            }
            maxi = max(maxi,MAH(v));
        }
        cout << maxi << endl;
    }
    
}