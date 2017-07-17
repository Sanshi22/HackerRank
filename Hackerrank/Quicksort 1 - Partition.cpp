#include<iostream>
using namespace std;
int main()
{
  int n,k=0,m=0,l=0;
    cin>>n;
    int ar[10000];
    for(int i=0;i<n;i++)
        {
          cin>>ar[i];
        }
    int p=ar[0];
    int ar1[1000],ar2[1000],ar3[1000];
    for(int i=0;i<n;i++)
        {
        if(ar[i]<p)
            {
            ar1[k++]=ar[i];
        }
        else if(ar[i]>p)
            {
            ar3[m++]=ar[i];
        }
        else ar2[l++]=ar[i];
    }
    for(int i=0;i<k;i++)
        {
        cout<<ar1[i]<<" ";
    }
    for(int i=0;i<l;i++)
        {
        cout<<ar2[i]<<" ";
    }
    for(int i=0;i<m;i++)
        {
        cout<<ar3[i]<<" ";
    }
    return 0;
    
}