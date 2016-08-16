#include <stdio.h>

int main()
{
	int t,n,temp;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		temp=n;
		while(n%2==0){
		n=n/2;
		}
		if(n%3==0)
		n=n/3;
		if(n%5==0)
		n=n/5;
		if(n%17==0)
		n=n/17;
		if(n%257==0)
		n=n/257;
		if(n%65537==0)
		n=n/65537;
		if(n==1)
		printf("Yes\n");
		else
		printf("No\n");
	}
	return 0;
}
