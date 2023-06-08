#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int divSumPairs(int n,int arr[],int k){
    int count = 0;
    int sum = 0;
    int result = 0;
    for (int i = 0; i < n; i++){
        for (int j = 1 + count; j < n; j++){
            sum = arr[i] + arr[j];
            // cout << sum << " ";
            if(sum%k == 0){
                result++;
            }
        }
        count++;
    }
    return result;
}

int main(){

    // input
    int n,k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int finalResult = divSumPairs(n,arr,k);
    cout << finalResult;
    
    return 0;
    
}