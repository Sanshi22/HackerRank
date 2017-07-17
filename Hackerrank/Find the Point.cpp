#include<bits/stdc++.h>
using namespace std;
int main()
    {
    int n,p1,p2,q1,q2,a,b;
    cin>>n;
    for(int i=0;i<n;i++)
        {
        cin>>p1>>p2>>q1>>q2;
        a=q1-p1;
        b=q2-p2;
        cout<<q1+a<<" "<<q2+b<<"\n";
    }
    return 0;
}