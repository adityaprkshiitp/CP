#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr,arr+n);

    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d ",arr[i]);
    // }

    int count = 1;
    int x = arr[0];
    for (int i = 0; i < n; i++)
    {
        if(arr[i] <= x + 4){
            continue;
        }else{
            // printf("%d ",x);
            x = arr[i];
            count++;
        }
    }
    printf("%d",count);
    
    return 0;
}