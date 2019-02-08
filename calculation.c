#include <stdio.h>

int main()
{
int w,b,c=1;
    scanf("%d %d",&w,&b);
    while(b!=0)
    {
        c=c*w;
        b--;
    }
	
	printf("%d",c);
    return 0;
}
