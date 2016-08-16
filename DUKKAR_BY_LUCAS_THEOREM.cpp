#include <stdio.h>

int main()
{
	int t;
	scanf("%d",&t);
	long long int n,m,p,ans;
	while(t--){
		scanf("%lld%lld",&n,&p);
		ans=(n%p)+1;
		m=n/p;
		while(m>0){
			ans = ans*((m%p)+1);
			m=m/p;			
		}
		printf("%lld\n",n+1-ans);
	}
	return 0;
}
