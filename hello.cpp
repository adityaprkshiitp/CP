#include<iostream>
#include<time.h>
using namespace std;

void indDeletion(int a[], int n, int index1, int index2)
{
    // code for Deletion
    for (int i = index1; i < n-1; i++)
    {
        a[i] = a[i + 1];
    }
    for (int i = index2; i < n-1; i++)
    {
        a[i] = a[i + 1];
    }
}
void repeat(int a[], int n)
{
    int x = 1;
    int y = n;
    // x != y
    // cout<<x<<endl;
    // cout<<y<<endl;
    for (int j = 0; j < n; j++)
    {
        if (a[x]==a[j] || a[y]==a[j])
        {
            indDeletion(a,n,x,y);
            n--;
            n--;
        }  
    }
    for (int i = 0; i < n; i++)
    {
            if(a[x]==a[i] || a[y]==a[i])
            {
                repeat(a,n);
            }
            else
            {
                break;
            }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<n;
    

    
}

int main()
{
    int n,t;
    int x,y;
    cin>>t;
    int list[t];
    for (int i = 0; i < t; i++)
    {
        cin>>n;
        if (n>0 && n<50)
        {
            int a[n];
            for (int i = 0; i < n; i++)
            {
                cin>>a[i];
            }
            repeat(a,n);
            list[i]=n;
        }
    }
    for (int i = 0; i < t; i++)
    {
        cout<<list[i]<<endl;
    }
    return 0;
}