#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
   long long n,x,z;
    cin>>n;
    for(long long i=0;i<n;i++)
        {
            cin>>x;
            if(x>=38)
                {
                    z=x%5;
                if(5-z==1||5-z==2)
                    cout<<x+(5-z)<<"\n";
                else cout<<x<<"\n";
            }
        else cout<<x<<"\n";
        
    }
    return 0;
}
