#include <stdio.h>

long long int fact(long long int a)
{
	long long int f=1;
	while(a>0)
	{
		f=f*a;
		a--;
	}
	return f;
}
int main()
{
	long long int n,k,i,a,p;
	
	while(scanf("%lld%lld",&n,&k)!=EOF) {
		p=1;
		for(i=0;i<k;i++) {
			scanf("%lld",&a);
			p=p*fact(a);
		}
		p=fact(n)/p;
		printf("%lld\n",p);
	}
}
