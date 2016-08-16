#include <stdio.h>

int main(){
	long long int x,t,avg,n,sum;
	scanf("%lld",&t);
	while(t--){
		scanf("%lld%lld",&x,&avg);
		n = avg-x;
		sum = n * (avg+1);
		printf("%lld\n",(sum - ((n-1)*n/2)));
	}
	return 0;
}
