#include <stdio.h>
#include <math.h>

int main(void)
{
	int t,a;
	double m,n,k,T;
	long long int q;
	scanf("%d",&t);
	while(t--){
		scanf("%lf%lf%lf",&n,&k,&m);
		T=log(m)-log(n);
		T=T/log(k);
		a=T;
		printf("T/log(k)=%lf\n",T);
		printf("%lf\n",T);
	}
	return 0;
}
