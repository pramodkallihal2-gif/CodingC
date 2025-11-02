#include<stdio.h>
int main ()
{
    int day;
    printf("Enter the day number (1-7) :");
    scanf("%d",&day);
    switch(day){
    case 1 : printf("Monday");
        break;
    case 2 : printf("Tuesday");
        break;
    case 3 : printf("Wednesday");
        break;
    case 4 : printf("Thursday");
        break;
    case 5 : printf("Friday");
        break;
    case 6 : printf("Saturday");
        break;
    case 7 : printf("Sunday");
        break;
    default : printf("Enter a valid number!");
        }
    return 0;    
}
/*int main()
{
    int marks;
    printf("Enter the marks you got (0-100)");
    scanf("%d",&marks);
    if (marks<=35){
        printf("You are failed.\n");
        printf("You can not  continue your further\n study.");
        }
        
    else{
        printf("congratulations.\n");
        printf("You are passed."); 
        
        }
}*/