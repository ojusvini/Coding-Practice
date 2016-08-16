#include <stdio.h>

int main()
{
	long long int n,m,c,k,ans,wc,tot,t;
	scanf("%lld",&t);
	while(t--){
		scanf("%lld%lld%lld",&n,&c,&m);
		ans=n/c;
		tot=ans;
		while(tot>=m){
			k=tot/m;
			ans=ans+k;
			tot=(tot%m)+k;
		}
		printf("%lld\n",ans);
	}
	return 0;
}
