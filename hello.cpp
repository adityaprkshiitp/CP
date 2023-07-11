#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n; scanf("%d",&n);
    int arr[n];
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
        res ^= arr[i];
        printf("%d ",res);
    }
    
    
    
    return 0;
}