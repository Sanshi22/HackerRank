#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int n,j,i,l,m;
    char ar[100][100];
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>ar[i][j];
        }
    }
    for(l=1;l<(n-1);l++)
    {
        for(m=1;m<(n-1);m++)
        {
            if((ar[l][m]>ar[(l-1)][m])&&(ar[l][m]>ar[l][(m-1)])&&(ar[l][m]>ar[(l+1)][m])&&(ar[l][m]>ar[l][(m+1)]))
               {
                   ar[l][m]='X';
               }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<ar[i][j];
        }
        cout<<"\n";
    }

       return 0;
}


