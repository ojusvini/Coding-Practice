#include <stdio.h>

int main() {
	int T;
	long long int a3,l3,s,n,d, a,i;
	scanf("%d",&T);
	
	while(T-- > 0 ) {
		scanf("%lld%lld%lld",&a3,&l3,&s);
		n = (s*2)/(a3+l3);
		d = (l3 - a3)/(n-5);
		a = a3 - 2*d;
		
		printf("%lld\n",n);
		for(i = 0; i < n; i++)
		printf("%lld ",(a + (d*i)));
		printf("\n");
	} 
	return 0;
}
