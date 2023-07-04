#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    int n; scanf("%d",&n);
    int k; scanf("%d",&k);
    int arr[n],brr[n];
    ll luck;
    for (int i = 0; i < n; ++i)
    {
        scanf("%d %d",&arr[i],&brr[i]);
        if(brr[i] == 0){
            luck += arr[i];
            arr[i] = 0;
        }
    }
    sort(arr,arr+n, greater<int>());
    for (int i = 0; i < k; i++)
    {
        luck += arr[i];
    }
    for (int i = k; i < n; i++)
    {
        luck -= arr[i];
    }
    printf("%lld",luck);
    return 0;
}