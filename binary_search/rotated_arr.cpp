#include<bits/stdc++.h>
using namespace std;

int normal_binarySearch(int el,vector<int> &arr,int low, int high){
    while (low <= high){
        int mid =  low + (high - low)/2;
        if(el == arr[mid]){return mid;}
        else if (el < arr[mid]){high = mid - 1;}
        else {low = mid+1;}
    }
    return -1;
}

int rotateTimes(vector<int> &arr,int n, int low, int high){
    while (low <= high){
        int mid =  low + (high - low)/2;
        int next = (mid+1)%n;
        int prev = (mid+n-1)%n;
        if(arr[mid] <= arr[next] && arr[mid] <= arr[prev]){
            return mid;
        }
        if(arr[mid] >= arr[0]){
            low = mid+1;
        }else if(arr[mid] <= arr[n-1]){
            high = mid-1;
        }
    }
    return -1;
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("../error.txt", "w", stderr);
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    #endif
    int t; cin >> t;
    while(t--){
        int n,temp,el; cin >> n >> el;
        vector<int> arr;
        for(int i = 0; i < n; i++){
            cin >> temp;
            arr.push_back(temp);
        }
        int low = 0;
        int high = n-1;
        int res = rotateTimes(arr,n,low,high);
        int left = -1;
        int right = -1;
        if(res-1 >= 0){left = normal_binarySearch(el,arr,0,res-1);}
        if(res != n-1){right = normal_binarySearch(el,arr,res,n-1);}
        cout << max(left,right) << '\n';
    }
}