#include <bits/stdc++.h>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n; scanf("%d",&n);
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int item;
        scanf("%d",&item);
        arr.push_back(item);
    }
    sort(arr.begin(),arr.end());
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d ",arr[i]);
    // }
    
    // int n = sizeof(arr)/sizeof(arr[0]);
    int i = 0;
    arr[n] == 101;
    while( arr[i] == arr[i + 1] && i + 1 < n){
        i+=2;
    }

    printf("%d",arr[i]);

    return 0;
}