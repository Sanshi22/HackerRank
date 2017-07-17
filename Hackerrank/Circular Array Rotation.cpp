
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
typedef long long ll;
using namespace std;


int main() 
{
  
   ll n , q , k,i,ar[1000000],t,c;
    cin>>n>>k>>q;
    for(i=0;i<n;i++)
        cin>>ar[i];               
         if(k>n)
             k%=n;
        while(q--)
        {
            cin>>t;
            
             if(((t-k)<=(n-1))&&((t-k)>=0))
                cout<<ar[t-k];
           
            else if((t-k)<0)
                cout<<ar[n+(t-k)];
              
 
        
         cout<<"\n";
          
                        
       }
    
    
    return 0;
}