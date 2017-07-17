#include<bits/stdc++.h>
using namespace std;
int divide(int i,int A[],int n)
    {
    //cout<<"fr";
    for(int j=0;j<n;j++)
        {
        if(i%A[j]!=0)
            {
                return 1;   
            }
    }
    return 0;
}
int mi=INT_MIN;
int k=INT_MIN;
int main()
    {
    int m,n,flag=0,h=0;
    int A[10],B[10];
    cin>>m>>n;
    for(int i=0;i<m;i++)
        {
        cin>>A[i];
        if(A[i]>mi)
            {
            mi=A[i];
        }
    }
    for(int i=0;i<n;i++)
        {
        cin>>B[i];
        if(B[i]>k)
            {
            k=B[i];
        }
    }
    for(int i=mi;i<=k;i++)
    {
        if(divide(i,A,m)==0)
           {
            flag=0;
            // cout<<"fes";
                for(int j=0;j<n;j++)
                {
            if(B[j]%i==0)
                {
                flag++;
            }  
        }
        if(flag==n)
           {
            h++;
            //cout<<i<<" ";
           
        } 
        }
        else 
            continue;
    }
    cout<<h;
    return 0;
}