#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    // #ifndef ONLINE_JUDGE
    // freopen("error.txt", "w", stderr);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    int t; scanf("%d",&t);
    while(t--){
        int n; scanf("%d",&n);
        vector<int> vec;
        vector<int> diff;
        scanf("%d",&vec[0]);
        for (int i = 1; i < n; i++)
        {
            int temp;
            scanf("%d",&temp);
            vec.push_back(temp);
            diff.push_back(vec[i] - vec[i-1]);
        }
        int maximum = *max_element(diff.begin(),diff.end());
        if(n >= maximum){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    return 0;
}
