#include <stdio.h>

int main()
{
	int n,a;
	while(1)
	{
		scanf("%d",&n);
		if(n==0)
		break;
		else{
			a=((7*n) -2 +(((n-1)*(n-2)*3)/2));
			printf("%d\n",a);
		}
	}
	return 0;
}
