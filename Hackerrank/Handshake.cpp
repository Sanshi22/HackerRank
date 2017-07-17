#include<bits/stdc++.h>
using namespace std;
int main()
    {
    int t,sum=0,x;
   cin>>t;
    for(int i=0;i<t;i++)
        {
        cin>>x;
        sum=0;
        if(x==0||x==1)
            {
            cout<<"0"<<"\n";
            continue;
            }
        for(int k=0;k<x;k++)
            {
            sum+=(x-(k+1));
             }
        cout<<sum<<"\n";
    }
        
    
    return 0;
}