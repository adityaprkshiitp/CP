#include<iostream>
using namespace std;

void indDeletion(int a[], int n, int index)
{
    // code for Deletion
    for (int i = index; i < n-1; i++)
    {
        a[i] = a[i + 1];
    }
}

int main()
{
    int t;
    int n,s;
    cin>>t;
    int sum=0,count=0;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            sum=sum + a[i];
        }
        for (int i = 0; i < n; i++)
        {
            int list[n];
            if (sum < s)
            {
                list[i]=0;
                break;
            }
            
            indDeletion(a,n,0);
            count++;
            indDeletion(a,n,n);
            count++;
            sum = sum - (a[0] + a[n]);
            if (sum = s)
            {
                list[i]=count;
            }
            count=0;
            cout<<list[i];
            
        }
    }
    //for (int i = 0; i < t; i++)
    //{
    //    cout<<list[i]<<endl;
    //}
    
    return 0;
}