#include <stdio.h>

int main()
{
	long long int t,n,l,m;
	m = 1000007;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		l = (3*n*n)+n;
		l = l/2;
		l = l%m;
		printf("%lld\n",l);
	}
	return 0;
}
