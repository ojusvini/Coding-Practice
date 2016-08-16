#include <stdio.h>

int main(){
	int t,i,j;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		if(n&1)  printf("BOB\n");
      else printf("ALICE\n"); 
	}
	return 0;
}
