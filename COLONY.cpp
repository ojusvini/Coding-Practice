#include<stdio.h>
#include<math.h>
int main()
{
	long long int k,n,j=0,a;
		scanf("%lld",&n);
		scanf("%lld",&k);
		if(k==0)
		printf("red\n");
		else
		{
			k=pow(2,n)-1-k;
		while(k!=0)
		{
			a=k%2;
			k=k/2;
			if(a==1)
			j++;
		}
		if(j%2==0)
		printf("red\n");
		else 
		printf("blue\n");
	}
	return 0;
}
