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
        int n;
        vector<int> unsorted_arr;
        vector<int> sorted_arr;
        scanf("%d",&n);
        for (int i = 0; i < n; i++)
        {
            int temp;
            scanf("%d",&temp);
            unsorted_arr.push_back(temp);
            sorted_arr.push_back(temp);
        }
        sort(sorted_arr.begin(),sorted_arr.end());

        // for (int i = 0; i < n; i++)
        // {
        //     cout << sorted_arr[i] << " ";
        // }
        // cout << endl;
        // for (int i = 0; i < n; i++)
        // {
        //     cout << unsorted_arr[i] << " ";
        // }
        // cout << endl;
        

        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if((unsorted_arr[i] % 2 != 0 && sorted_arr[i] % 2 != 0) || (unsorted_arr[i] % 2 == 0 && sorted_arr[i] % 2 == 0)){
                // cout << "unsorted_arr[i] : " << unsorted_arr[i] << " ";
                // cout << "sorted_arr[i] : " << sorted_arr[i] << " ";
                // cout << endl;
                count++;
            }else{
                i = n;
            }
        }
        // cout << " count : " << count;
        // cout << " n : " << n;
        if(count == n){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
        
    }
    return 0;
}
