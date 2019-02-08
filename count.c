#include <stdio.h>

int main()
{
int b,c=0;
    scanf("%d",&b);
    while(b!=0)
    {
        b=b/10;
        c++;
    }
	
	printf("%d",c);
    return 0;
}
