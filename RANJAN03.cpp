#include <stdio.h>
long long int sum(long long int n)
{
	if(n==1)return 2;
	else
	return 3*sum(n-1)+2;
}
int main()
{
	int t;
	long long int n,ans;
	while(t--){
		scanf("%lld",&n);
		ans=pow(3,n)-1;
		printf("%lld\n",sum(n));
	}
	return 0;	
}
