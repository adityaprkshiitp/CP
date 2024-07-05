#include <bits/stdc++.h>
using namespace std;

int maxL(vector<int> arr, int k){
    return *max_element(arr.begin(),arr.begin() + k -1);
}

int maxR(vector<int> arr, int k){
    return *max_element(arr.begin() + k + 1,arr.end());
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

        // sol
        int water = 0;
        for (int i = 1; i < n-1; i++)
        {
            if(maxL(arr,i) == 0){water += maxR(arr,i) - arr[i];}
            else if(maxR(arr,i) == 0){water += maxL(arr,i) - arr[i];}
            else {water += min(maxL(arr,i),maxR(arr,i)) - arr[i];}
        }
        cout << water << endl;
        
        
    }
}