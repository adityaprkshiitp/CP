#include <bits/stdc++.h>
using namespace std;

int main(){

    // input
    int n; scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if(arr[i] % 2 != 0){
            arr[i]++;
            arr[i + 1]++;
            count++;
        }
    }
    
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    if(sum%2==0){
        cout << count*2;
    }else{
        cout << "NO";
    }



    return 0;
}