#include <stdio.h>
#include <math.h>
int main()
{
	int t;
	scanf("%d",&t);
	double a,b,c,d,s,ar;
	while(t--)
	{
		scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
		s=(a+b+c+d)/2;
		ar = fabs((s-a)*(s-b)*(s-c)*(s-d));
		ar=sqrt(ar);
		printf("%lf\n",ar);
	}
	return 0;
}
