#include <stdio.h>

int main()
{
int a,b,f[100],i,q=0;
    scanf("%d %d",&a,&b);
    for(i=0;i<a;i++)
    {
        scanf("%d",&f[i]);
    }
    for(i=0;i<b;i++)
    {
    q=q+f[i];
    }
	
	printf("%d",q);
    return 0;
}
