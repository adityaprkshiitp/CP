#include <bits/stdc++.h>
using namespace std;

bool isValid(vector<int> &arr, int n, int k, int maxi){
    int student = 1;
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
        if(sum > maxi){
            student++;
            sum = arr[i];
        }
    }
    if(student > k){
        return false;
    }
    return true;
}

int numPages(vector<int> & arr, int n, int k, int maxi, int max_sum){
    int low = maxi;
    int high = max_sum;
    int res = -1;
    while (low <= high){
        int mid = high + (low - high)/2;
        if(isValid(arr,n,k,maxi) == true){
            res = mid;
            high = mid-1;
        }else{
            low = mid+1;
        }
    }
    return arr[res];
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../error.txt", "w", stderr);
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    #endif
    int t; cin >> t;
    while(t--){
        int n,temp,k; cin >> n >> k;
        vector<int> arr;
        int maxi = 0;
        int max_sum = 0;
        for(int i = 0; i < n; i++){
            cin >> temp;
            arr.push_back(temp);
            maxi = max(maxi,temp);
            max_sum += temp;
        }
        int res = numPages(arr,n,k,maxi,max_sum);
        cout << res << endl;
    }
}

// #include<bits/stdc++.h>
// int Solution::books(vector<int> &A, int B) {
//     if(A.size()<B) return -1;
//     assert(A.size()<=100000);
//     long long min_time = (*max_element(A.begin(), A.end()));
//     long long max_time = accumulate(A.begin(), A.end(), 0);
//     assert(min_time<=100000);
//     long long mid;
//     int required=0, time=0;
//     while(min_time<=max_time){
//         required=1;
//         time=0;
//         mid = (min_time+max_time)/2;
//         for(int i=0; i<A.size(); i++){
//             if(time+A[i]>mid){
//                 time=A[i];
//                 required++;
//             }
//             else time+=A[i];
//         }
//             if(required>B) min_time = mid+1;
//             else max_time = mid-1;
//     }
//     return min_time;
// }
