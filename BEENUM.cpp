#include <stdio.h>
#include <math.h>

int main()
{
	long long int b;
	scanf("%lld",&b);
	while(1){
		if(b==-1)
		break;
		else {
			long long int rt,s;
			double a;
			if((b-1)%3!=0){
			printf("N\n");
			}
			else {
			rt=1+(4*((b-1)/3));
			a=1.0+(4.0*((b-1)/3.0));
			a=sqrt(a);
			s=(long long int)a;
			if(s*s!=rt)printf("N\n");
			else {
				if((s-1)%2)printf("N\n");
				else printf("Y\n");
				}
			}
		}
		scanf("%lld",&b);
	}
	return 0;
}
