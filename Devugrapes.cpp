#include <stdio.h>
long long int min(long long int a,long long int b){
	if(b<a) return b;
	else return a;
}
long long int max(long long int a,long long int b){
	if(b>a) return b;
	else return a;
}
int main()
{
	long long int t,n,k,i,c,a;
	scanf("%lld",&t);
	while(t--){
		scanf("%lld%lld",&n,&k);
		long long int g[n];
		c = 0;
		for(i=0;i<n;i++){
			scanf("%lld",&g[i]);
			a = min(g[i]%k,k-(g[i]%k));
			if(g[i]-a==0){
				a = max(g[i]%k,k-(g[i]%k));
			}
			c = c+a;
		}
		printf("%lld\n",c);
	}
	return 0;
}
