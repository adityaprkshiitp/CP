#include<bits/stdc++.h>
using namespace std;

void iceCream(int arr[],int n,int k){
    // sort(arr,arr+n);
    for (int i = 0; i < n; ++i)
    {
        for (int j = i+1; j < n; ++j)
        {
            if(arr[i] + arr[j] == k){
                // printf("%d   ",j);
                printf("%d %d\n",i+1,j+1);
                break;
            }
        }
    }
}

int main(){
    int t; scanf("%d",&t);
    for (int l = 0; l < t; ++l)
    {
        int k; scanf("%d",&k);
        int n; scanf("%d",&n);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&arr[i]);
        }
        iceCream(arr,n,k);
    }
    

    return 0;
}