#include<iostream>
using namespace std;
int kangaroo(int x1,int x2,int v1,int v2)
    {
    if(x1==x2)
        return 0;
    else if(x1<=x2&&v1<=v2)
        return 1;
    else if(x2<=x1&&v2<=v1)
        return 1;
    else
    {
        x1=x1+v1;
        x2=x2+v2;
        return kangaroo(x1,x2,v1,v2);
    }
}
int main()
    {
    int x1, x2, v1,v2,r;
    cin>>x1>>v1>>x2>>v2;
    r=kangaroo(x1,x2,v1,v2);
        if(r==0)
    cout<<"YES\n";
    else cout<<"NO\n";

    return 0;
}
