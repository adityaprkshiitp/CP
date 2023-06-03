#include <bits/stdc++.h>
#include <math.h>
using namespace std;

void jump ( int a, int b, int x, int y){
    if(y >= x || ((b-a) % (x-y))){
        cout << "NO";
    } else {
        cout << "YES";
    }
}

int main()
{
    int x1,x2,v1,v2;
    cin >> x1 >> v1 >> x2 >> v2;
    jump(x1,x2,v1,v2);
    
    return 0;
}