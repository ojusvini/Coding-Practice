#include <stdio.h>
#include <math.h>

int main()
{
	int i;
	long long int n,ans;
	i = 0;
	
	while(1)
	{
		i = i+1;
		scanf("%lld",&n);
		if(n == 0)
		return 0;
		ans= pow(n,n-2);
		printf("Case %d, N = %lld, # of different labelings = %lld\n",i,n,ans);
		
	}
	return 0;
}
