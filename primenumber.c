#include<stdio.h>
int main()
{
    int n,i,j,p=0;
    int count;
    printf("Enter the value of n :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
   {  count=0;
      for(j=1;j<=i;j++)
     {   if (i%j==0)
            count++;
     }
     if(count==2)
     {printf("%d ,",i);
     p++;  
     }

     }
     printf("\n The total number between 1 to %d is %d.",n,p);
     return 0;
     }

