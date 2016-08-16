#include <stdio.h>

int main()
{
	long long int t,h,l,i;
	double n,m,k;
	scanf("%lld",&t);
	i=1;
	while(t--){
		scanf("%lf%lf%lf",&n,&m,&k);
		h=n*m*k-1;
		l=0;
		while(n>1){
			n=n/2;
			l++;
		}
		while(m>1){
			m=m/2;
			l++;
		}
		while(k>1){
			k=k/2;
			l++;
		}
		printf("Case #%lld: %lld %lld\n",i,h,l);
  		i++;
	}
	return 0;
}
