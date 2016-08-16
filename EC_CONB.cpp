#include<stdio.h>
int main()
{
	int n,i,k=0,t=1,sum=0,b[32],j;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			while(a[i]!=1)
			{
				b[k++]=a[i]%2;
				a[i]=a[i]/2;
			}
			b[k++]=a[i];
			for(j=k-1;j>=0;j--)
			{
				sum=sum+(b[j]*t);
				t=t*2;
			}
			printf("%d\n",sum);
		}
		else
		printf("%d\n",a[i]);
		    sum=0;
			t=1;
			k=0;
		    
	}
	return 0;
}
