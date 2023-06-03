#include <bits/stdc++.h>
#include <math.h>
using namespace std;

void grade ( int arr[], int n){
    for (int i = 0; i < n; i++){
        if(arr[i] > 37){
            if (( arr[i] + 1 ) % 5 == 0){
                arr[i] = arr[i] + 1;
            } else if ((arr[i] + 2 ) % 5 == 0){
                arr[i] = arr[i] + 2;
            }
        }
    }

    for (int i = 0; i < n; i++){
        cout << arr[i] << endl;
    }
    
}

int main()
{
    int n;
    cin >> n;
    int grades[n];
    for (int i = 0; i < n; i++){
        cin >> grades[i];
    }
    grade(grades,n);
    
    return 0;
}