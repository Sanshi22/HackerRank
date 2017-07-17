#include<stdio.h>
 int main()
    {int i,n;
     long long int ar[10],s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {scanf("%llu",&ar[i]);
    s=s+ar[i];
    }
    printf("%llu",s);}