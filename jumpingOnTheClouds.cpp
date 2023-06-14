#include<bits/stdc++.h>
#include<math.h>
using namespace std;
typedef unsigned long long int ll;

int main(){

    int n;cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int count = 0;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i+2]==0)
        {
            count++;
            i++;
        }

        else
            count++;
    }
    
    cout << count;
    
    return 0;
}