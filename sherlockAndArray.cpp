#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vec;

void balancedSums(int n, int arr[], int total){
    // sort(arr,arr+n);
    int sum_left = 0;
    for (int i = 0; i < n; ++i)
    {
        if(sum_left == total - arr[i] - sum_left){
            printf("YES\n");
            return;
        }
        sum_left += arr[i];
    }
    printf("NO\n");
    return;
}

int main(){

    int t; scanf("%d",&t);
    while(t--){
        int n; scanf("%d",&n);
        int arr[n];
        int total_sum = 0;
        for (int i = 0; i < n; ++i)
        {
            scanf("%d",&arr[i]);
            total_sum += arr[i];
        }
        balancedSums(n,arr,total_sum);
    }
    return 0;
}