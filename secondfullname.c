#include<stdio.h>
void main()
{
    //program for full name.
    char firstname[50],secondname[50],fullname[100];
    printf("Enter your first name :");
    scanf("%s",firstname);
    printf("Enter your second name :");
    scanf("%s",secondname);
    strcpy(fullname,firstname);//copy it in fullname
    strcat(fullname," ");//add it in fullname.
    strcat(fullname,secondname);//add it in fullname.
    printf("Your full name is %s",fullname);
    //program complete.
}