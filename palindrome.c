#include <stdio.h>
int main()
{
   int number, t, rev=0, rmndr;
   scanf("%d",&number);
   t = number;
   while (number > 0)
   {
      rmndr = number%10;
      rev = rev*10 + rmndr;
      number = number/10;
   }
   if(t == rev)
   {
      printf("\n %d yes", t);
   }
   else
   {
      printf("\n %d  no", t);
   }
   return 0;
}
