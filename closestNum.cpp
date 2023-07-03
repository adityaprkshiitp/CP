#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MAX 100

int main(){
    int n; scanf("%d",&n);
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld",&arr[i]);
    }
    sort(arr,arr+n);
    int minimum = 10000000;
    for (int i = 0; i < n-1; i++)
    {
        int x = arr[i+1] - arr[i];
        minimum = min(minimum,x);
    }
    for (int i = 0; i < n; i++)
    {
        if(arr[i+1] - arr[i] == minimum){
            printf("%lld %lld ", arr[i], arr[i+1]);
        }
    }
    

    
    return 0;
}