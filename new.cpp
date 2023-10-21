#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
typedef vector<ll> vec;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t; scanf("%d",&t);
    while(t--){
        // cout << t << endl;
        ll n; scanf("%lld",&n);
        ll count = 0,sum = 0;
        ll arr[n];
        set<ll> mid;
        vec hello;
        for (int i = 0; i < n; i++)
        {
            scanf("%lld",&arr[i]);
            mid.insert(arr[i]);
            sum += arr[i];
            hello.push_back(arr[i]);
        }
        ll maximum = *max_element(hello.begin(),hello.end());
        vec count_arr(maximum,0);
        int mid_size = mid.size();
        for (int i = 0; i < mid_size; i++)
        {
            count_arr[arr[i]-1]++;
            count++;
        }
        ll used_size = maximum - count;
        vec tobeused;
        for (int i = 0; i < maximum; i++)
        {
            if(count_arr[i] == 0){
                tobeused.push_back(i+1);
            }
        }
        // for (int i = 0; i < used_size; i++)
        // {
        //     cout << tobeused[i] << " ";
        // }
        // cout << endl;
        ll sum_arr_size = sum-tobeused[0] + 1;
        ll sum_array[sum_arr_size];
        sum_array[0] = tobeused[0];
        for (int i = 1; i < sum_arr_size; i++)
        {
            sum_array[i] = sum_array[i-1] + 1;
        }
        // for (int i = 0; i < sum_arr_size; i++)
        // {
        //     cout << sum_array[i] << " ";
        // }
        // cout << endl;
        // cout << endl;
        cout << t << endl;
    }
    
    return 0;
}
