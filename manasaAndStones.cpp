#include <bits/stdc++.h>
using namespace std;

int main()
{   
    #ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t; scanf("%d",&t);
    while (t--)
    {
        int n,a,b; scanf("%d %d %d",&n,&a,&b);
        int arr[n];
        for (int i = 0; i <= n-1; i++)
        {
            arr[i] = (i*a + (n-1-i)*b);
        }
        sort(arr,arr+n);
        for (int i = 0; i <= n-1; i++)
        {
            cout << arr[i] << " ";
            if(arr[i] == arr[i+1]){
                break;
            }
        }
        cout << endl;
    }
    
    return 0;
}