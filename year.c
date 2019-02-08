#include <stdio.h>

int main()
{
int q;
scanf("%d",&q);
if(q%400==0)
    
        {
	
	
		printf("yes");
	}
	else if(q%100==0)
	{
		printf("no");
	}
    else if(q%4==0)
    {
        printf("Yes");
    }
   else
   {
       printf("no");
   }

    return 0;
}
