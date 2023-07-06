#include<bits/stdc++.h>
#include<math.h>
using namespace std;
typedef long long int ll;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n; scanf("%d",&n);
    int k; scanf("%d",&k);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int maximum,max_pos,help;
    if(k>=n){
        sort(arr, arr + n, greater<int>());
    }else{
        for (int i = 0; i < k ; i++)
        {
            maximum = *max_element(arr+i, arr + n);
            max_pos = distance(arr, max_element(arr+i, arr + n));
            // printf("max = %d ,max_pos = %d\n",maximum,max_pos);
            if(arr[i] == maximum){
                if(k+1<=n){k++;}
                continue;
            }
            if(arr[i] != maximum){
                help = arr[i];
                arr[i] = maximum;
                arr[max_pos] = help;
                // swap1(mid,max_pos);
            }
            // cout << "\n";
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}