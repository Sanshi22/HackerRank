#include<bits/stdc++.h>
using namespace std;
int main()
    {
    int n,k,x,s=0,p;
    cin>>n>>k;
    for(int i=0;i<n;i++)
        {
        cin>>x;
        if(i!=k)
            s+=x;
    }
    cin>>p;
    if(p==(s/2))
        {
        cout<<"Bon Appetit";
    }
    else 
     {  
        cout<<p-(s/2);
    }
    return 0;
}