#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
  int t;
   cin>>t;
    while(t!=0)
        {
        int m,ar[10001];
        cin>>m;
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
            {
            cin>>ar[i];
        }
        for(int i=0;i<n;i++)
            {
            for(int j=i+1;j<n;j++)
                {
               
                    
                    if(ar[i]+ar[j]==m)
                        {cout<<i+1<<" "<<j+1<<"\n";}
                }
            }
                t--;
        
    }
    return 0;
}
