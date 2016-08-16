#include <stdio.h>
#include <math.h>
int main()
{
	long long int a,b,t,n,i,j,f,c;
	scanf("%lld",&t);
	while(t--){
		scanf("%lld",&n);
		c=0;
		for(i=2;i<=n;i++){
			a=2*i*i-1;
			b=sqrt(a);
			f=0;
			//printf("f[x]=%lld sqrt = %lld\n",a,b);
			for(j=b;j>1;j--){
				if(a%j==0){
					f=1;
					break;
				}
			}
			if(f==0)c++;
		}
		printf("%lld\n",c);
	}
	return 0;
}
