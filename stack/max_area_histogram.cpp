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

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../error.txt", "w", stderr);
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    #endif
    int t; cin >> t;
    while(t--){
        // input
        int n; cin >> n;
        vector<int> arr(n+1);
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }
        arr[n] = 0;
        // NSL
        cout << "NSL : ";
        vector<int> res3 = NSL(n,arr);
        for (int i = 0; i < res3.size(); i++){
            cout << res3[i] << ' ';
        }cout << endl;
        // NSR
        cout << "NSR : ";
        vector<int> res4 = NSR(n,arr);
        for (int i = 0; i < res4.size(); i++){
            cout << res4[i] << ' ';
        }cout << endl;

        int maxi = 0;
        for (int i = 0; i < n; i++){
            maxi = max(maxi,(res4[i] - res3[i]-1)*arr[i]);
        }
        cout << maxi << endl;
        
        
    }
    
  
}