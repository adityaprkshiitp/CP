#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<ll> vec;
 
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n; cin >> n;
    vector<int> nums(n);
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    for (int i = nums.size() - 1; i > 0; i--){
        int diff = 10000007;
        int pos = 0;
        if(nums[i-1]<nums[i]){
            for (int j = i; i < n; i++)
            {
                if(abs(nums[j]-nums[i-1] > diff)){pos = j;}
                diff = min(diff,abs(nums[j] - nums[i-1]));
            }
            swap(nums[pos],nums[i-1]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    
    return 0;
}
