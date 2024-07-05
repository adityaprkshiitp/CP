#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vec;

vector<int> NGR(int n, vector<int> arr){
    stack<int> s1;
    vector<int> res;
    for (int i = n-1; i >= 0; i--){
        if(s1.size() == 0){res.push_back(-1);}
        else if(s1.size()>0 && s1.top() > arr[i]){res.push_back(s1.top());}
        else if(s1.size()>0 && s1.top() <= arr[i]){
            while(s1.size() > 0 && s1.top() <= arr[i]){
                s1.pop();
            }
            if(s1.size() == 0){res.push_back(-1);}
            else{res.push_back(s1.top());}
        }
        s1.push(arr[i]);
    }
    reverse(res.begin(),res.end());
    return res;
}

vector<int> NGL(int n, vector<int> arr){
    stack<int> s1;
    vector<int> res;
    for (int i = 0; i < n; i++){
        if(s1.size() == 0){res.push_back(-1);}
        else if(s1.size()>0 && s1.top() > arr[i]){res.push_back(s1.top());}
        else if(s1.size()>0 && s1.top() <= arr[i]){
            while(s1.size() > 0 && s1.top() <= arr[i]){
                s1.pop();
            }
            if(s1.size() == 0){res.push_back(-1);}
            else{res.push_back(s1.top());}
        }
        s1.push(arr[i]);
    }
    return res;
}

vector<int> NSL(int n, vector<int> arr){
    stack<int> s1;
    vector<int> res;
    for (int i = 0; i < n; i++){
        if(s1.size() == 0){res.push_back(-1);}
        else if(s1.size()>0 && s1.top() < arr[i]){res.push_back(s1.top());}
        else if(s1.size()>0 && s1.top() >= arr[i]){
            while(s1.size() > 0 && s1.top() >= arr[i]){
                s1.pop();
            }
            if(s1.size() == 0){res.push_back(-1);}
            else{res.push_back(s1.top());}
        }
        s1.push(arr[i]);
    }
    return res;
}

vector<int> NSR(int n, vector<int> arr){
    stack<int> s1;
    vector<int> res;
    for (int i = n-1; i >= 0; i--){
        if(s1.size() == 0){res.push_back(-1);}
        else if(s1.size()>0 && s1.top() < arr[i]){res.push_back(s1.top());}
        else if(s1.size()>0 && s1.top() >= arr[i]){
            while(s1.size() > 0 && s1.top() >= arr[i]){
                s1.pop();
            }
            if(s1.size() == 0){res.push_back(-1);}
            else{res.push_back(s1.top());}
        }
        s1.push(arr[i]);
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
        vector<int> arr(n);
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }

        // NGR
        cout << "NGR : ";
        vector<int> res1 = NGR(n,arr);
        for (int i = 0; i < res1.size(); i++){
            cout << res1[i] << ' ';
        }cout << endl;
        // NGL
        cout << "NGL : ";
        vector<int> res2 = NGL(n,arr);
        for (int i = 0; i < res2.size(); i++){
            cout << res2[i] << ' ';
        }cout << endl;

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
        
    }
    
  
}