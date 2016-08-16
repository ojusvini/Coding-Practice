#include <stdio.h>

int main()
{
	long long int t,n,q,i,j,k,b,p,c;
	double pos;
	double a[2000][4];
	
	scanf("%lld",&t);
	while(t--)
	{	c=0;
		scanf("%lld",&n);
		for(i=0;i<n;i++)
		{	for(j=0;j<4;j++)
			scanf("%lf",&a[i][j]);
		}
		scanf("%lld",&q);
		for(k=0;k<q;k++)
		{
			scanf("%lld",&b);
			if(b)
			{	c=0;
				scanf("%lf%lf%lf%lf",&a[i][0],&a[i][1],&a[i][2],&a[i][3]);
				i++;
				n++;
			}
			else
			{	c=0;
				scanf("%lf",&pos);
				for(i=0;i<n;i++) {
					if((a[i][0]>=pos && a[i][2]<=pos)||(pos>=a[i][0]&&pos<=a[i][2]))
					c++;
				}
				printf("%lld\n",c);
			}
		}
	}
	return 0;
}
