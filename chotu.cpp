#include<stdio.h>
#include<math.h>
int main()
{
	int t,x,y;
	double c;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&x,&y);
		c=2*(sqrt((x*x)-(y*y)));
		printf("%.3f\n",c);
	}
	return 0;
}
