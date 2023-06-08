#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int sumArray(int n,int m,int arr[]){
    int sum = 0;
    for (int i = n; i < m; i++){
        sum += arr[i];
    }
    return sum;
}
int chocodistribution(int n,int arr[],int d,int m){
    int count = 0;
    for (int i = 0; i < m + i; i++){
        if(m+i-1<n){
            int sum = sumArray(i,m+i,arr);
            // cout << sum << " ";
            if(sum == d){
                count++;
            }
        }else break;
    }
    return count;
}

int main()
{
    // input
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int d,m;
    cin >> d >> m;
    
    int finalCount = chocodistribution(n,arr,d,m);
    cout << finalCount;
}