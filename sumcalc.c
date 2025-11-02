#include<stdio.h>
int main()
{
    int sum=0,i=0,j,n;
    printf("Enter the value of b :");
    scanf("%d",&n);
    j=n;
    while(i<=n && j>=1){
        sum=sum+i;
        i++;
       --j;
        printf("%d \n",j);
    }
    printf("%d \n",sum);
    return 0 ;
}