#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int	main()
{
    int n; scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    ll calorie = 0;
    sort(arr,arr+n,greater<int>());
    for (int i = 0; i < n; i++)
    {
        calorie += pow(2,i) * arr[i]; 
    }
    printf("%lld",calorie);

    return 0;
}
