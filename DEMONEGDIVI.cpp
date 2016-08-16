#include <stdio.h>

int main()
{
	long long int n,q,i,l;
	char a[100];
	scanf("%lld",&n);
	if(n==0){
		printf("0\n");
		return 0;
	}
	l=0;
	while(n!=0){
		q=n/-2;
		if((q*-2)>n){
			n=q+1;
			a[l]='1';
		}
		else if((q*-2)==n){
			n=q;
			a[l]='0';
		}
		else {
			n=q;
			a[l]='1';
		}
		l++;
	}
	for(i=l-1;i>-1;i--)printf("%c",a[i]);
	printf("\n");
	return 0;
}
