#include<iostream>
using namespace std;
int main()
{
 int a[3],b[3],i,ar,br;
    for(i=0;i<3;i++)
        {
        cin>>a[i];
    }
    for(i=0;i<3;i++)
        {
        cin>>b[i];
    }
   ar=0,br=0;

    for(i=0;i<3;i++)
        {
        if(a[i]>b[i])
        {
            ar++;
        }
        else if(a[i]<b[i])
        {br++;}

    }
    cout<<ar<<" "<<br;
    return 0;

}
