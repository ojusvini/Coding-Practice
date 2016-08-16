#include <stdio.h>
long long int gcd(long long int a,long long int b)
{
	if(b==0)
	return a;
	return gcd(b,a%b);
}
int main()
{
	long long int t,x,y,a,b,n,d,i,j;
	scanf("%lld",&t);
	j=1;
	while(t--)
	{
		scanf("%lld%lld%lld%lld",&x,&y,&a,&b);
		if(x==0&&y==0){
			printf("Case %lld: 0\n",j);
		}
		else {
		n=(x*(a+1)) + (y*(b+1));
		d=(x+y)*(a+b+1);
		i=gcd(d,n);
		n=n/i;
		d=d/i;
		printf("Case %lld: %lld/%lld\n",j,n,d);
		}
		j++;
	}
	return 0;
}
