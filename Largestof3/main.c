#include<stdio.h>
int main()
{
   int a,b,c;
   printf("\nEnter value of a:");
   scanf("%d",&a);
   printf("\nEnter value of b:");
   scanf("%d",&b);
   printf("\nEnter value of c:");
   scanf("%d",&c);

   if((a>b)&&(a>c))
      printf("\n Number 1 is greatest");
   else if((b>c)&&(b>a))
      printf("\n Number 2 is greatest");
   else
      printf("\n Number 3 is greatest");
   return 0;
}
