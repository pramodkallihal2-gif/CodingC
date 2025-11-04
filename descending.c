#include<stdio.h>
int main()
{
    int i,j,n,a[100],change;
    printf("Enter the number of elements you want to add:");
    scanf("%d",&n);
    printf("Enter the vale of the element:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=1;j<n-1;j++)
       { if(a[j]>a[j-1])
        {
            change=a[j];
            a[j]=a[j-1];
            a[j-1]=change;
        
        }

        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d,",a[i]);
    }
    return 0;
}