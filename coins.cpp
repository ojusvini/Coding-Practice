#include <stdio.h>

int main()
{
	long long int a,b;
	while(scanf("%lld",&a) == 1) {
		b = a/2 + a/3 + a/4;
		if(a>b)
		printf("%lld\n",a);
		else 
		printf("%lld\n",b);
	}
	return 0;
}
