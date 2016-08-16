#include <stdio.h>

int main()
{
	unsigned long long int n,digs;
	while(1){
		scanf("%llu",&n);
		if(n==-1) break;
		else if(n==0) printf("0\n");
		else {
			digs = n/9;
			if(n%9!=0) digs++;
			printf("%llu\n",digs);
		}
	}
	return 0;
}
