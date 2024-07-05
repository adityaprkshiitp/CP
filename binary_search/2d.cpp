#include <bits/stdc++.h>
using namespace std;

int solve(vector<vector<int>> &arr, int mid, int m, int n){
    int sum = 0;
    for(int i = 0; i < m; i++){
        sum += upper_bound(arr[i].begin(),arr[i].end(),mid) - arr[i].begin();
    }
    return sum;
}

int median(vector<vector<int>> &arr, int n, int m){
    int maxi = 0;
    int mini = INT_MAX;
    for( int i = 0; i < m; i++){
        maxi = max(maxi,arr[i][n-1]);
    }
    for( int i = 0; i < m; i++){
        mini = min(mini,arr[i][0]);
    }
    int req = (1 + n*m)/2;
    int low = mini;
    int high = maxi;
    while(low <= high){
        int mid = low - (low - high)/2;
        int smaller = solve(arr,mid,m,n);
        // cout << low << ' ' << mid << ' ' << high << ' ';
        // cout << smaller << endl;
        if(smaller <= req){low = mid + 1;}
        else{high = mid - 1;}
            
    }
    return low;
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("../error.txt", "w", stderr);
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    #endif
    int t; cin >> t;
    while(t--){
        int n,m; cin >> n >> m;
        vector<vector<int>> arr(n,vector<int>(m));
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                cin >> arr[i][j];
            }
        }
        int pos3 = median(arr,n,m);
        cout << pos3 << endl;
    }
}