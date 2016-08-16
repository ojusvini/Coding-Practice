#include <stdio.h>

int main()
{
	long long int t,n,p,ans;
	scanf("%lld",&t);
	while(t--){
		scanf("%lld",&n);
		if(n==0)
		printf("0 1\n");
		else{
			ans=n%2 + 1;
			p=n/2;
			while(p>0){
				ans=ans*(p%2+1);
				p=p/2;
			}
			printf("%lld %lld\n",n+1-ans,ans);
		}
	}
	return 0;
}
