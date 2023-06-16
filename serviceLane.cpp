#include <bits/stdc++.h>
using namespace std;

int minOfArray(int n,int arr[],int y,int z){
    int minimum = 3;
    for (int i = y; i < z+1; i++)
    {
        minimum = min(minimum,arr[i]);
    }
    return minimum;
}

int main(){
    int n,t; scanf("%d %d",&n,&t);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int minimum[t];
    for (int i = 0; i < t; i++)
    {
        int y,z; scanf("%d %d",&y,&z);
        minimum[i] = minOfArray(n,arr,y,z);
    }
    
    for (int i = 0; i < t; i++)
    {
        printf("%d\n",minimum[i]);
    }
    
    return 0;
}