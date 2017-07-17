
#include<iostream>
using namespace std;
int main()
{
int t,z=1,n,h=1,i;
cin>>t;
while(z<=t)
{
cin>>n;
if(n==0)
{
h=1;
z++;
cout<<h<<"\n";
continue;
}
h=1;
for(i=1;i<=n;i++)
{
if((i%2)==1)
{
h=h*2;
}
else
{h=h+1;
}
}
cout<<h<<"\n";
z++;

}
return 0;
}

