#include <bits/stdc++.h>
#include <math.h>
using namespace std;
typedef long long int ll;

int main()
{
    int b,n,m; cin >> b >> n >> m;
    int arr1[n],arr2[m],cost[n];
    int a = 0;
    for (int i = 0; i < n; i++){cin >> arr1[i];}
    for (int i = 0; i < m; i++){cin >> arr2[i];}
    sort(arr1,arr1+n,greater<int>());
    sort(arr2,arr2+m,greater<int>());
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if(arr1[i] + arr2[j] <= b){
                cost[a] = arr1[i] + arr2[j];
                a++;
                break;
            }
        }   
    }
    if(a==0){cout << -1;}else{cout << *max_element(cost,cost + n);}
    return 0;
}
