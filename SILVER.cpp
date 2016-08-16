#include <stdio.h>
#include <math.h>
int main()
{
	long long int l,n,c;
	while(1) {
		scanf("%lld",&l);
		if(l==0) return 0;
		n=1;
		c=0;
		while(1) {
			if(pow(2,n)>l) {
				c=n-1;
				break;
			}
			else n++;
		}
		printf("%lld\n",c);
	}
	return 0;
}
