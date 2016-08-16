#include  <stdio.h>
int main()
{
	long long int n;
	long long int x,o,i;
	scanf("%lld",&n);
	if(n==2){
		scanf("%lld%lld",&x,&o);
		printf("%lld\n",x^o);
	}
	else {
	o=0;
	for(i=0;i<n;i++){
		scanf("%lld",&x);
		o=o|x;
	}
	printf("%lld\n",o);
	}
	return 0;
}
