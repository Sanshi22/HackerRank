#include<bits/stdc++.h>
using namespace std;
int main()
{   
    long long int n,x,h,l,h1=0,l1=0;
    cin>>n;
    cin>>x;
    h=x;
    l=x;
    for(int i=1;i<n;i++)
    {
           cin>>x;
            if(x>h)
            {
                h1++;
                h=x;
            }
            if(x<l)
            {
               l1++;  
                l=x;
            }
                      
    }
    cout<<h1<<" "<<l1;
    return 0;
}