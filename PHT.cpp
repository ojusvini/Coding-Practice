#include <stdio.h>

int main()
{	long long int t,i;
	long long int w,n;
	scanf("%lld",&t);
	i = 0;
	while(i<t)
	{
		scanf("%lld",&w);
		if(w<3)
		{n =0;printf("Case %d: %lld\n",i+1,n);}
		else {
		n =1;
		while(1)
		{
			if(n*(n+2)==w)
			{
				printf("Case %d: %lld\n",i+1,n);
				break;
			}
			else
			n++;
		}
	}
		
		i++;
	}
	return 0;
}
