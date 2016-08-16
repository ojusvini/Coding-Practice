#include <stdio.h>
int main(){
	int t,i,n;
	scanf("%d",&t);
	while(t--){
	
		scanf("%d",&n);
		i = 1;
		while(n>1){
			n= n/2;
			i = i*2;
		}
		printf("%d\n",i);
	}
	return 0;
}
