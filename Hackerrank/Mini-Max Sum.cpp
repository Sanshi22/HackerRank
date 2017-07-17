#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
    {
    vector <ll> v;
    ll x;
    for(ll i=0;i<5;i++)
        {
        cin>>x;
        v.push_back(x);
    }
   sort(v.begin(),v.end());
    cout<<v[0]+v[1]+v[2]+v[3]<<" "<<v[5]+v[4]+v[3]+v[2]+v[1];
    return 0;
}