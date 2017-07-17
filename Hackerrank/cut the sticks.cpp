#include<iostream>
using namespace std;
int main()
{
    int n,i=0,ar[1000],flag=1,h,k;
    cin>>n;
    k=n;
    while(k!=0)
    {
    	cin>>ar[i++];
       k--;
    }

    while(flag!=0)
    {

        flag=0;
        i=0;
	    for ( i = 0; i < n; ++i)
	    {
	    	if(ar[i]!=0)
            {h=ar[i];
             break;}
	    }

        for(i=0;i<n;i++)// lowest array element selection
        {
            if(ar[i]!=0)
            {
	             if(ar[i]<h)
	            {
	                h=ar[i];
	            }
            }

        }

        for(i=0;i<n;i++)
        {
            if(ar[i]!=0)
            {
	            ar[i]=ar[i]-h;
	            ++flag;

            }

        }
        if(flag!=0)
         cout<<flag<<"\n";

        h=0;
    }


    return 0;
    }





