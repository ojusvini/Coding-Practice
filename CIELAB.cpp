#include <stdio.h>

int main(){
	int t,n,d;
	scanf("%d",&t);
	scanf("%d",&n);
	d = t-n;
	if(d%10==9)	d = d-1;
	else d = d+1;
	printf("%d\n",d);
	return 0;
}
