#include <stdio.h>

long long int gcd(long long int a, long long int b)
{
	if(b==0)
	return a;
	else
	return gcd(b,a%b);
	
}
int main()
{
	long long int a,b, i,t,g;
	scanf("%lld",&t);
	while(t--) {
	
	scanf("%lld%lld", &a, &b);
	
	g = gcd(a,b);
//	printf("%lld",g);

	printf("%lld %lld\n", b/g, a/g);
	}
return 0;
}


