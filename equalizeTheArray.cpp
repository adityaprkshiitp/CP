#include <bits/stdc++.h>
#include<math.h>
using namespace std;

int maxArr(int arr[],int n){
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if(arr[i] > max){
            max = arr[i];
        } 
    }

    return max;
}

int main(){

    int n; scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    // sort(arr,arr+n);
    int count[n];
    for (int i = 0; i < n; i++)
    {
        int counted = 1;
        for (int j = i+1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                counted++;
            }
        }
        count[i] = counted;
    }
    
    // for (int i = 0; i < n; i++)
    // {
    //     cout << count[i] << " ";
    // }
    
    int maximum = maxArr(count,n);
    printf("%d",n-maximum);


    
    return 0;
}