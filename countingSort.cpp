#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vec;
#define LEN 100

void print(int result_arr[]){
    for (int i = 0; i < LEN; i++)
    {
        int j = 0;
        while( j < result_arr[i]){
            printf("%d ",i);
            j++;
        }
    }
}
int main(){

    // input
    int n; scanf("%d",&n);
    int arr[n];
    int result_arr[LEN] = {0};
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
        result_arr[arr[i]]++;
    }

    // counting sort 1
    
    // print(result_arr);

    // counting sort 2

    print(result_arr);
    
    

    return 0;
}