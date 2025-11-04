#include<stdio.h>
int main()
{
    int temp,i,j,n,a[100];
    printf("Enter the number of Elements you want:");
    scanf("%d",&n);
    printf("Enter the elements of the array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("The array in ascending order is:\n");
    for(i=0;i<n;i++)
    {
        if(i<n-1)
            printf("%d,",a[i]);
        else
            printf("%d.",a[i]);
    }
    return 0;
}
