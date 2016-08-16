#include <stdio.h>

int main()
{
	long long int b,l,n,d,a,s,i;
	int t;
	scanf("%d",&t);
	while(t--){
		scanf("%lld%lld%lld",&b,&l,&s);
		if(b==l&&s==l*5)
			printf("5\n%d %d %d %d %d\n",l,l,l,l,l);
		else {
		n=((2*s)/(b+l));
		printf("%lld\n",n);
		d=((l-b)/(n-5));
		a=(b-(2*d));
		for(i=0;i<n;i++)
		printf("%lld ",a+(i*d));
		printf("\b\n");
		}
	}
	return 0;
}
