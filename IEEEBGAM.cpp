#include <stdio.h>

int main()
{
	int t;
	double p,n;
	scanf("%d",&t);
	while(t--) {
		scanf("%lf",&n);
		p=n/(n+1);
		printf("%0.8lf\n",p);
	}
	return 0;
}
