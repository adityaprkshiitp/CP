#include <bits/stdc++.h>
#include <math.h>
using namespace std;
typedef long long int ll;

int gcd(int a, int b)
{
    if (b == 0){
        return a;
    }
    return gcd(b, a % b);
}

int findLCM(int n,ll arr[]){
    int result = arr[0];
    for (int i = 0; i < n; i++){
        result = (arr[i] * result) / gcd(arr[i],result);
    }
    return result;
}

int main()
{
    int n;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int LCM = findLCM(n,arr);
    cout << LCM;

    return 0;
}