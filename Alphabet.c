#include <stdio.h>

int main(void)
{
char c;
scanf("%c",&c);
if((c>'A'&& c<'Z') ||( c>'a' && c<'z'))
    {
	
	
		printf("Alphabet");
	}
	else
	{
		printf("No");
	}

   
    return 0;
}
