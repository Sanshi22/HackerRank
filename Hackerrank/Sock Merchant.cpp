#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,flag=0;
    int ha[101]={0};
    cin>>n;
    for(int i=0;i<n;i++)
        {
        cin>>x;
       ha[x]++;
    }
    for(int i=1;i<=100;i++)
        {
        if(ha[i]!=0)
        {
            flag+=ha[i]/2;
        }
    }
    cout<<flag;
    return 0;
}
