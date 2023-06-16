#include <bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n,m; scanf("%d %d",&n,&m);
    int arr[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr,arr+m);
    int actual_size = n-m;
    int actual_arr[actual_size];
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < m; j++)
        {
            if(i==arr[j]){
                count++;
            }
        }
        if(count == 0){
            actual_arr[k] = i;
            k++;
        }
    }
    
    // for (int i = 0; i < k; i++)
    // {
    //     cout << actual_arr[i] << " ";
    // }
    
    int maximum = 0;
    for (int i = 0; i < k; i++)
    {
        int minimum = 100000;
        for (int j = 0; j < m; j++)
        {
            int x = abs(actual_arr[i] - arr[j]);
            minimum = min(minimum,x);
        }
        maximum = max(maximum,minimum);
        
        // cout << maximum << " " << actual_arr[i] << endl;
    }
    
    cout << maximum;

    return 0;
}