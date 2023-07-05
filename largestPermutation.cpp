#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vec;

int main(int argc, char const *argv[])
{
    int n; scanf("%d",&n);
    int k; scanf("%d",&k);
    vec arr;
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] !=  *max_element(arr.begin() + i,arr.end()) && count < k){
            swap(arr[i],*max_element(arr.begin(),arr.end()));
            count++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;

}
