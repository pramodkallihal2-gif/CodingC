#include<stdio.h>
int main()
{
   //Finding the area of triangle.
   float b,h,area;
   printf("Enter the base length of the triangle:");
   scanf("%f",&b);
   printf("Enter the height length of the triangle:");
   scanf("%f",&h);
   area = b*h/2;
   printf("The area of the triangle is %.2f",area);
   return 0;
}