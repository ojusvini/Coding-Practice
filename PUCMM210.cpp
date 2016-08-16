#include <stdio.h>
int a[1000010];
int main()
{
	long long int tmp=0,i,n;
	a[0]=0;
	for(i=1;i<=1000000;i++){
		tmp=(tmp+(i*i*i))%1000000003;
		a[i]=(a[i-1]+tmp)%1000000003;
	}
	int t;
	scanf("%d",&t);
	while(t--){
		scanf("%lld",&n);
		printf("%lld\n",a[n]);
	}
	return 0;
}
