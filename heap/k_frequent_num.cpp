#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<int> vec;
typedef pair<int,pair<int,int>> ppi;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../error.txt", "w", stderr);
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    #endif
    // input
    int t; cin >> t;
    while (t--){
        // input
        int n,k; cin >> n >> k;
        vector<int> arr(n);
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }

        //Hashmap
        unordered_map<int,int> mp;
        for (int i = 0; i < n; i++){
            mp[arr[i]]++;
        }
        
        // minHeap
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> minH;
        for ( auto i : mp){
            minH.push({i.first,i.second});
            if(minH.size()>k){minH.pop();}
        }
        while (minH.size() > 0){
            cout << minH.top().second << ' ';
            minH.pop();
        }cout << endl;
        

        //minHeap
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> minHeap;
        for ( auto i : mp){
            minHeap.push({i.second,i.first});
            // if(minH.size()>k){minH.pop();}
        }
        // print sorted arr for no k
        while(minHeap.size()>0){
            int freq = minHeap.top().second;
            int el = minHeap.top().first;
            for (int i = 1; i <= freq; i++){
                cout << el << ' ';
            }
            minHeap.pop();
        }cout << endl;
    }
    
}