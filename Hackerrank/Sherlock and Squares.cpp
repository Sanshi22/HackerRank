#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int t,a,b,i,j,cnt,k,m,n;
    cin>>t;
    for(k=0;k<t;k++)
        {
        cin>>a>>b;
        m=floor(sqrt(b));
        n=ceil(sqrt(a));
       cout<<((m-n)+1)<<"\n";
    }
    
    return 0;
}

