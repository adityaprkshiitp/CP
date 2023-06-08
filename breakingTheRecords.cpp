#include <bits/stdc++.h>
#include <math.h>
using namespace std;
typedef long long int ll;

bool isMax(ll n,ll m){
    if(n>m){
        return true;
    }else{
        return false;
    }
}

bool isMin(ll n,ll m){
    if(n<m){
        return true;
    }else{
        return false;
    }
}
ll breakingTheMaxRecords(ll arr[],int n){
    ll max = arr[0];
    ll maxCount = 0;
    for (int i = 0; i < n - 1; i++){
        if(isMax(arr[i+1],max)){
            maxCount++;
            max = arr[i+1];
            // cout << max << " ";
        }else {
            continue;
        }
    }

    return maxCount;
}

ll breakingTheMinRecords(ll arr[],int n){
    ll min = arr[0];
    ll minCount = 0;
    for (int i = 0; i < n-1; i++){
        if (isMin(arr[i+1],min)){
            minCount++;
            min = arr[i+1];
        } else {
            continue;
        }
    }

    return minCount;
}

int main()
{
    // input
    int n;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    ll minCount = breakingTheMinRecords(arr,n);
    ll maxCount = breakingTheMaxRecords(arr,n);
    cout << maxCount << " " << minCount;

    return 0;
}