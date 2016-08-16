#include <stdio.h>

int main()
{
	int t,i,n,tc;
	long long int x,s,a;
	scanf("%d",&t);
	tc=1;
	while(t--){
		a=1;
		s=1;
		scanf("%d",&n);
		for(i=0;i<n;i++){
			scanf("%lld",&x);
			s=s+x;
			if(s<=0){
				a=a-s+1;
				s=1;
			}
		}
		printf("Scenario #%d: %lld\n",tc,a);
		tc++;
	}
	return 0;
}
