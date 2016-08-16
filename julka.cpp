#include <stdio.h>

int main()
{	long long int n , d , a;
	scanf("%lld",&n);
	scanf("%lld",&d);
	
	a = (n + d) / 2;
	printf("%lld\n",a);
	
	a = (n - d) / 2;
	printf("%lld\n",a);
	
	return 0;
}
