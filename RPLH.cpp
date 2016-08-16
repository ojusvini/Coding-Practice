#include <stdio.h>
#include <math.h>
//#define PI 2*acos(0.0);
#define g 9.806

int main()
{	int t,i;
	double r,v,a;
	i=1;
	scanf("%d",&t);
	while(t--) {
		scanf("%lf%lf",&r,&v);
		a=(r*g)/(v*v);
		a=asin(a);
		a=a*57.2957795;
		a=a/2;
		if(a>=0.0&&a<=45.00)
		printf("Scenario #%d: %0.2lf\n",i,a);
		else
		printf("Scenario #%d: -1\n",i);
		i++;
	}
	return 0;
}
