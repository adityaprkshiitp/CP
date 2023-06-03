#include <bits/stdc++.h>
#include <math.h>
using namespace std;


int fruit ( int arr[], unsigned int x, int y, int z, int w){
    int arr1[x];
    int count = 0;
    for (int i = 0; i < x; i++)
    {
        arr1[i] = arr[i] + y;
        if(arr1[i] <= w && arr1[i] >= z){
            count++;
        }
    }
    
    return count;
}


int main()
{
    int s,t,a,b;
    unsigned int m,n;
    cin >> s >> t;
    cin >> a >> b;
    cin >> m >> n;
    int d1[m],d2[n];
    for (int i = 0; i < m; i++){
        cin >> d1[i];
    }
    for (int i = 0; i < n; i++){
        cin >> d2[i];
    }
    
    int countApple = fruit(d1,m,a,s,t);
    int countOrange = fruit(d2,n,b,s,t);
    
    cout << countApple << endl;
    cout << countOrange << endl;
    
    return 0;
}