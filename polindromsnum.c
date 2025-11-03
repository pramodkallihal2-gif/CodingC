#include<stdio.h>
int main()
{
    int i,num,reversed=0,reminder,original;
    printf("Enter the number you want to check: ");
    scanf("%d ",&num);
    original=num;
    while(num!=0)
    {
        reminder=num%10;
        reversed=reversed*10+reminder;
        num/=10;
    }
    if(original==reversed)
    {
        printf("The entered number %d is polindrom",original);
    }
    else
    printf("The entered number %d is not polindrom.",original);
    return 0;
}