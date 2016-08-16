#include<stdio.h>
int main()
{
	long long int t,k,n,j,a;
	scanf("%lld",&t);
	while(t--)
	{
		j=0;
		scanf("%lld%lld",&n,&k);
		if(k==1)
		printf("Male\n");
		else if(k==2)
		printf("Female\n");
		else 
		{
			k=k-1;
		while(k!=0)
		{
			a=k%2;
			k=k/2;
			if(a==1)
			j++;
		}
		if(j%2!=0)
		printf("Female\n");
		else 
		printf("Male\n");
	}
		
	}
	return 0;
}
