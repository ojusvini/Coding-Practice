#include <stdio.h>

int main()
{
	int n,r;

	scanf("%d",&n);
	
	while(n) {
		r = (n* (n + 1) * ( (2*n) + 1) ) / 6 ;
		printf("%d\n",r);
		scanf("%d",&n);
	}
	return 0;
}
