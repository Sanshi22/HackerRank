#include<bits/stdc++.h>
using namespace std;
int hour(int A[][6],int i,int j)
    {   
    int sum;
     sum=A[i][j]+A[i][j+1]+A[i][j+2]+A[i+1][j+1]+A[i+2][j]+A[i+2][j+1]+A[i+2][j+2];
    return sum;
    }
int mi=INT_MIN;
int main()
    {
    int A[6][6],ma;
    for(int i=0;i<6;i++)
        {
            for(int j=0;j<6;j++)
                {
                    cin>>A[i][j];
                }
        }
    for(int i=0;i<4;i++)
        {
             for(int j=0;j<4;j++)
                 {  
                    ma=hour(A,i,j);
                    //cout<<ma<<" ";
                 if(ma>mi)
                     mi=ma;
                  }
         }
      cout<<mi;
    return 0;
}