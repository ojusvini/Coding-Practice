#include <stdio.h>
#include <math.h>

int main()
{
	int t,n,m,i,j,min;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		int a[n];
		for(i = 0; i < n;i++)
		scanf("%d",&a[i]);
		
		scanf("%d",&m);
		int b[m];
		for(i = 0; i < m;i++)
		scanf("%d",&b[i]);
		min = 1000000;
		for(i = 0 ; i < n; i++)
		{
			for(j = 0; j < m; j++)
			{
				if(abs(a[i]-b[j]) < min)
				{
					min = abs(a[i]-b[j]);
				}
				
			}
			
		}
		
		printf("%d\n",min);
		
	}
	return 0;
}
