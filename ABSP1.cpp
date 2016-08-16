#include<stdio.h>

int main()
{
	int t,n,i;
	
	long long int sum,psum;
	long long int a[10001];
	scanf("%d",&t);
	
	while(t--)
	{	sum=0;
		psum=0;
		scanf("%d",&n);		
		scanf("%lld",&a[0]);
		for(i = 1; i < n;i++)
	{	scanf("%lld", &a[i]);
		psum=psum+((i-1)*(a[i]-a[i-1])) +a[i]-a[i-1];	
		sum=sum+psum;
	}
		printf("%lld\n",sum);
	}
	
	return 0;
}
