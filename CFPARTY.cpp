#include <stdio.h>

int main(){
	int t,i,j;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		if(n==1) printf("0\n");
		else printf("%d\n",n-2);
	}
	return 0;
}
