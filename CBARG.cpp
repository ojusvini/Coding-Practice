#include <stdio.h>

int main(){
	long long int t,i,j;
	scanf("%lld",&t);
	while(t--){
		int n;
		scanf("%lld",&n);
		long long int a,c=0,m=0;
		for(i=0;i<n;i++){
			scanf("%lld",&a);
			if(c<a) {
				m = m+ (a-c);
				c = c + (a-c);	
			}
			else if(c>a) c = c-(c-a);
		}
		printf("%lld\n",m);
	}
	return 0;
}
