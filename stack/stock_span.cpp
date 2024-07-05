#include <bits/stdc++.h>
using namespace std;

// num of elements <= arr[i] for each i on their left
vector<int> NGL(int n, vector<int> arr){
    stack<pair<int,int>> s1;
    vector<int> res;
    for (int i = 0; i < n; i++){
        if(s1.size() == 0){res.push_back(i + 1);}
        else if(s1.size()>0 && s1.top().first > arr[i]){res.push_back(i - s1.top().second);}
        else if(s1.size()>0 && s1.top().first <= arr[i]){
            while(s1.size() > 0 && s1.top().first <= arr[i]){
                s1.pop();
            }
            if(s1.size() == 0){res.push_back(i);}
            else{res.push_back(i - s1.top().second);}
        }
        s1.push({arr[i],i});
    }
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
        vector<int> arr(n);
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }

        // NGL
        cout << "NGL : ";
        vector<int> res2 = NGL(n,arr);
        for (int i = 0; i < res2.size(); i++){
            cout << res2[i] << ' ';
        }cout << endl;

        
    }
    
  
}