#include <stdio.h>
int main()
{
   int i, n, p = 0;
   scanf("%d", &n);
   for(i=1; i<=n; i++)
   {
      if(n%i==0)
      {
         p++;
      }
   }
   if(p==2)
   {
      printf("yes",n);
   }
   else
   {
      printf(" no",n);
   }
}
