#include<stdlib.h>
#include<iostream>
using namespace std;
int main()
{
    int actual[3],expected[3],i;
    float fines;
    for(i=0;i<3;i++)
    {
        cin>>actual[i];
    }
    for(i=0;i<3;i++)
    {
        cin>>expected[i];
    }
    if(actual[2]<expected[2])
        {
        cout<<0;
        exit(0);
    }
    if((actual[1]<expected[1])&&(actual[2]<=expected[2]))
        {
        cout<<0;
        exit(0);
    }
    if((actual[0]<=expected[0])&&(actual[1]<=expected[1])&&(actual[2]<=expected[2]))
        {
        cout<<0;
        exit(0);
    }
    
    
    
   
     if((actual[0]>expected[0])&&(actual[1]<=expected[1])&&(actual[2]<=expected[2]))
       {
        fines=15*(actual[0]-expected[0]);
        cout<<fines;
        exit(0);
        
       }
    
     if((actual[1]>expected[1])&&(actual[2]<=expected[2]))
      {
         fines=500*(actual[1]-expected[1]);
         cout<<fines;
         exit(0);

      }
      

      cout<<10000;
      return 0;

}

