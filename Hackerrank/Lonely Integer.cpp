#include<iostream>
using namespace std;
int main()
{
    int ar[100],i,x=0,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
      cin>>ar[i];
    }
    for(i=0;i<n;i++)
    {
        x^=ar[i];
    }
    cout<<x;
    return 0;

}
