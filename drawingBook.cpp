#include <bits/stdc++.h>
#include <math.h>
using namespace std;
typedef long long int ll;

int drawingBook(int n,int p){
    int i = 1;
    int j = n;
    int countFront = 0;
    int countBack = 0;
    if(n % 2 != 0 && p <= n/2){
        while(i!=p && i!=p+1){
            countFront++;
            i += 2;
        }
    }else if(n % 2 != 0 && p > n/2){
        while(j!=p && j!=p+1){
            countBack++;
            j -= 2;
        }
    }else if(n % 2 == 0 && p <= n/2){
        while(i!=p && i!=p+1){
            countFront++;
            i += 2;
        }
    }else if(n % 2 == 0 && p > n/2){
        while(j!=p && j!=p-1){
            countBack++;
            j -= 2;
        }
    }
    
    int maximum = max(countBack,countFront);

    return maximum;
}

int main()
{
    // input
    int n,p;
    cin >> n >> p;
    
    int result = drawingBook(n,p);
    cout << result;

    return 0;
}