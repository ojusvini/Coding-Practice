#include <stdio.h>

int main()
{
	int t;
	scanf("%d",&t);
	long long int n,k,m,a,p;
	while(t--){
		scanf("%lld%lld%lld",&n,&k,&m);
		a=0;
		p=n;
		while(1){
			if(p*k>=m)break;
			p=p*k;
			a++;			
		}
		printf("%lld\n",a);
	}
	return 0;
}
