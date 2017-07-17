#include<stdio.h>
main()
    {int n,ar[1000],s=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {scanf("%d",&ar[i]);
    s=s+ar[i];
    }
    printf("%d",s);
    }