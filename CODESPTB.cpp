#include <stdio.h>

int main()
{
	int t,n,m,i,j;
	scanf("%d",&t);
	while(t--)
	{	m = 0;
		scanf("%d",&n);
		int a[n];
		for(i = 0; i < n;i++)
		scanf("%d",&a[i]);
		m = 0;
		for(i = 1; i < n; i++)
		{
			for(j = i ; j >0 && a[j] < a[j - 1];j--)
			{
				a[j]= a[j-1]+a[j];
				a[j-1]=a[j]-a[j-1];
				a[j]= a[j]-a[j-1];
				m++;
			}
		}
		printf("%d\n",m);
	}
		
		return 0;
}
