#include<stdio.h>
int main()
{
    int i,n,sum,marks[50];
    printf("Enter number of subjects you wrote : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    { 
        printf("Enter the marks you got for Subject[%d]: ",i);
        scanf("%d",&marks[i]);
    }
    for( sum=0,i=1;i<=n;i++)
    {
        sum+=marks[i];
    }
    printf("Total marks you got from %d subjects is :%d\n",n,sum);
    float p=sum/n;
    printf("You got the percentage of %.2f \n",p);
    if(p>=90)
    {
        printf("Congratulations you got A grade.\n");
    }
    else if(p>=75)
    {
         printf("Congratulations you got B grade.\n");
    }
    else if(p>=60)
    {
         printf("Congratulations you got C grade.\n");
    }
    else if(p>=50)
    {
         printf("Congratulations you got D grade.\n");
    }
    else
    {
         printf("You got failed.\n");
    }
    return 0;
}