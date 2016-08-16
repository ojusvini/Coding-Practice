#include <stdio.h>
#include <math.h>

int main()
{
	int t;
	double s;
	scanf("%d",&t);
	
	while(t--)
	{
		scanf("%lf",&s);
		printf("%0.6lf",(1-(1/(3*sqrt(s/2)))));
	}
	return 0;
}
