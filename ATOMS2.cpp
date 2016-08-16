#include <stdio.h>

int main()
{
	int t;
	scanf("%d",&t);
	long long int n,k,m,a,p;
	while(t--){
		scanf("%lld%lld%lld",&n,&k,&m);
		a=0;
		if(k<=m/n){
			a=1;
			p=n*k;
			while(p<=m/k){
				p=p*k;
				a++;
			}			
		}
		printf("%lld\n",a);
	}
	return 0;
}
