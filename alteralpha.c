#include<stdio.h>
int main()
 {
    int j=0;
    int i;
    int k=0;
    char a='a';
   for(int i='a'; i<='z'; i++)
   {
    j++;
    if(j%2!=0)
    { printf("%c\n", i);
      k++;
    }
    }
    printf("Total number of alphabets are: %d\n", k);
return 0;
 }

