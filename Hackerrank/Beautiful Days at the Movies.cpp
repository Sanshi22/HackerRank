#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll Reverse(ll x)
{
    ll k=x,r,s=0,i=0;
    while(k>0)
    {
        r=k%10;
        s=(s*10)+r;
        k/=10;
    }
    return s;
}
int main()
{
    ll i,j,k,f=0,r;
    cin>>i>>j>>k;
    for(ll p=i;p<=j;p++)
    {
      r=Reverse(p);
      if(abs(p-r)%k==0)
        f++;
    }
    cout<<f;
    return 0;
}
