#include<iostream>
#include<time.h>
#include<stdio.h>
using namespace std;

int main()
{
    int num , size , o=1, a=0;
    float i=0,j;
    // input num
    cin>>num;
    // input
    for (int a = 0; a < num; a++)
    {
        // input the size of arrays
        cin>>size;
        int arr[size];

        for (int a = 0; a < size; a++)
        {
            // input for array
            cin>>arr[a];
        }

        //avg wala part
        srand(time(0));
        RAND_MAX==size;
        int x = rand();
        for (int a = 0; a < size; a++)
        {
            if(x==a)
            {
                continue;
            }
            i = (i + arr[a])/o ;
            o++;
        }
        for (int a = 0; a < size; a++)
        {
            if(x==a)
            {
                continue;
            }
            arr[a]=i;
        }  
        // output check
        for (int a = 0; a < size; a++)
        {
            for(int b=0; b<size;b++)
            {
            if(arr[a]=arr[b])
            {
                cout<<"YES";
            }
            else 
                cout<<"NO";
            }
        }
        
    }
    
    
    return 0;
}