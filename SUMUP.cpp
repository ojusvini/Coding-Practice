#include<stdio.h>
int main(){
	int t,n;
	scanf("%d",&t);
	while(t--){
	scanf("%d",&n);
	printf("%.5f\n",(1.0/2.0)*(1.0-(1.0/(n*n+n+1.0))));
	}
	return 0;
}
