#include<bits/stdc++.h>
#include <math.h>
using namespace std;
typedef unsigned long long int ll;

int main(){
    // int n; scanf("%d",&n);
    int n; cin >> n;
    ll count = 1;
    for (int i = 2; i < n ; i++)
    {
        count *= i;
        // printf("%llu ",count);
    }
    
    // printf("%llu",count);
    cout << count;
    return 0;
}