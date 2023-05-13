#include<iostream>
#include<cstdlib>
#include<algorithm>
using namespace std;

int main()

    {
    #ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
        int t;
        cin >> t;
        int Array[t];
        for (int i = 0; i < t; i++)
        {
            int n,k;
            cin >> n;
            cin >> k;
            int m = n;
            int arr[n],arr1[m];
            // saving
            for (int i = 0; i < n; i++)
            {
                arr1[i] = arr[i];
            }
            
            for (int i = 0; i < n; i++)
            {
                cin >> arr[i];
            }

            // max
            sort(arr,arr + n);
            int sum = 0;
            for (int i = 0; i < n - k; i++)
            {
                sum += arr[i];
            }
            // cout << sum << endl;
            
            //min
            sort(arr1,arr1 + m);
            int sum1 = 0;
            int a = 2*k;
            for (int i = 0; i < m - a + 1; i++)
            {
                sum1 += arr[m - 1];
                m--;
            }
            // cout << sum1;
    

            
            Array[i] = max( sum, sum1);
        
    }
    
    for (int i = 0; i < t; i++)
    {
        cout<<Array[i]<<endl;
    }
    


    return 0;
}