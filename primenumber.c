#include<stdio.h>
int main ()
{
    int n,i,j,count;
    printf("Enter the value of b :");
    scanf("%d",&n);
    printf("The prime number between 1 and %d are : \n",n);
    for(i=0;i<=n;i++)
    {
        count=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            count++;
        }
        if (count==2)
        {
            printf("%d \n",i);
        }
    }
    return 0 ;
    

}
