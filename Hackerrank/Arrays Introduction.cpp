#include<iostream>
using namespace std;
int main()
{
    int n,i;
    short ar[1000];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    i=0;
    for(i=n-1;i>=0;i--)
    {
       cout<<ar[i]<<" "; 
    }
    
}