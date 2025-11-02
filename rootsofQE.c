#include<stdio.h>
#include<math.h>
int main ()
{
    int a,b,c;
    double descriment,realvalue,imaginary,x1,x2;
    printf("Enter the coifficients of a,b,c :");
    scanf("%d %d %d",&a,&b,&c);
    descriment=b*b-4*a*c;
    if(descriment>0)
    {
        x1=(-b+sqrt(descriment))/2*a;
        x2=(-b-sqrt(descriment))/2*a;
        printf("The roots of the quadratic equations are %.2lf & %.2lf.",x1,x2);
    }
    else if(descriment==0)
    {
        x1=x2=-b/2*a;
        printf("The roots of the quadratic equations are %.2lf & %.2lf.",x1,x2);
    }
    else
    {
        realvalue=-b/2*a;
        imaginary=sqrt(descriment)/2*a;
        printf("The roots of this equatin are comples different.");
        printf("Root1=%.2lf + %.2lf",realvalue,imaginary);
        printf("Root2=%.2lf - %.2lf",realvalue,imaginary);
        
    }
    return 0;
}
