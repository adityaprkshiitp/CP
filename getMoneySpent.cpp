#include <bits/stdc++.h>
#include <math.h>
using namespace std;
typedef long long int ll;

int maxArr(int arr[], int n){
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if(arr[i] > max){
            max = arr[i];
        } 
    }

    return max;
}

int getMoneySpent(int b,int n,int m,int arr[],int arr1[]){
    int k = 0;
    int avg[k];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if(arr[i] + arr1[j] <= b){
                avg[k] = arr[i] + arr1[j];
                k++;
                break;
            }
        }
    }

    int max = maxArr(avg,k);
    if(max <= b){
        return max;
    }else{
        return -1;
    }
    
}

int main()
{
    // input
    int b,n,m;
    cin >> b >> n >> m;
    int keyboard[n],drives[m];
    for (int i = 0; i < n; i++){
        cin >> keyboard[i];
    }
    for (int i = 0; i < m; i++){
        cin >> drives[i];
    }
    sort ( keyboard, keyboard + n, greater<int>());
    sort ( drives, drives + m, greater<int>());

    int result = getMoneySpent(b,n,m,keyboard,drives);
    cout << result;

    return 0;
}