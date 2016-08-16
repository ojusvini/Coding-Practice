#include <stdio.h>

int main() 
{
	int t;
	long long int sum,n,m;
	
	scanf("%d",&t);
	
	while(t--) {
		scanf("%lld",&n);
		if(n%2)
		m = n;
		else 
		m = n-1;
		
		sum = ((m-1)* (m-1))/4;
		sum%=n;
		
		printf("%lld\n",sum);
	}
	return 0;
}
