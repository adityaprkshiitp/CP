#include <bits/stdc++.h>
#include <math.h>
using namespace std;

long int maxArr(long int *arr, unsigned int n){
    long int max = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if(arr[i] > max){
            max = arr[i];
        } 
    }

    return max;
}

long int minArr(long int *arr, unsigned int n){
    long int min = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if(arr[i] < min){
            min = arr[i];
        } 
    }

    return min;
}
int main()
{
    unsigned int n = 5;
    long int arr[n];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    
    long int a = arr[0] + arr[1] + arr[2] + arr[3];
    long int b = arr[1] + arr[2] + arr[3] + arr[4];
    long int c = arr[2] + arr[3] + arr[4] + arr[0];
    long int d = arr[3] + arr[4] + arr[0] + arr[1];
    long int e = arr[4] + arr[0] + arr[1] + arr[2];

    long int sumArr[5] = {a,b,c,d,e};
    long int min = minArr(sumArr,n);
    long int max = maxArr(sumArr,n);

    // for (int i = 0; i < 5; i++){
    //     cout << i + 1 << " : " << sumArr[i] << endl;
    // }
    
    cout << min << " " << max;

    return 0;
}