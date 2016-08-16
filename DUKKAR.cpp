#include <stdio.h>
long long int fact(int n)
{
	long long int f=1;
	while(n>1){
		f=f*n;
		n--;
	}
	return f;
}
int main()
{
	int t;
	scanf("%d",&t);
	long long int n,i,fn,fi,fni,p,c;
	while(t--){
		scanf("%lld%lld",&n,&p);
		c=0;
		fn=fact(n);
		for(i=0;i<=n/2;i++){
			fi=fact(i);
			fni=fact(n-i);			
			if((fn/(fi*fni))%p==0)
			c=c+2;
		}
		if(n%2==0){
			c=c-1;
		}
		printf("%lld\n",c);
	}
	return 0;
}

