#include <bits/stdc++.h>
#include <math.h>
using namespace std;


int beautifulDays( int days){
    int shared = 5;
    int liked = shared/2;
    int sum = 0;
    for (int i = 0; i < days; i++){
        int liked = shared/2;
        shared = liked*3;
        sum += liked;
    }
    
    return sum;
}

int main()
{
    int days,shared,liked,cumulative;
    cin >> days;

    int result = beautifulDays(days);
    cout << result;
    return 0;
}