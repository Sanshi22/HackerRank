#include<bits/stdc++.h>
using namespace std;
int main()
{   
    long long int A[100000],n,x,i,p=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {   
            cin>>A[i];
    }

    x=A[0];
    for(int i=0;i<n;i++)
    {
        if(A[i]>=x)
            x=A[i];
    }
    for(int i=0;i<n;i++)
    {
            if(A[i]==x)
                p++;
    }
    cout<<p;
    return 0;
}