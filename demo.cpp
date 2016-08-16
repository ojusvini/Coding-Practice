#include <stdio.h>

int main()
{	int d = ~0;
d = (1<<3)-1;
d = ~0 - d;
	/*int d = ch[0];
	printf("%d",d);
	puts(ch);*/
//	double d = (double)((51-2)/3.0);
	printf("%d",d);
}
