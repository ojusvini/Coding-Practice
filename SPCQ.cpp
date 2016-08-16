#include <stdio.h>
int main()
{
	long long int t,n,a,sum;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		if(n==0)
		{
			printf("%lld\n",n);
			break;
		}
		else {
		while(1){
			a=n;
			sum = 0;
		while(a!=0)
		{
			sum = sum+(a%10);
			a=a/10;	
		}
		if(n%sum)
		n++;
		else break;
		}
		}
		printf("%lld\n",n);
	}
}
