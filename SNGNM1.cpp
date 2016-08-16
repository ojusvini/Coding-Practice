#include <stdio.h>

int main(){
	int t,i,j,f;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		if(n==0) printf("no\n");
		else {
			i = n;
			f = 0;
			while(i!=0){
				j = i%10;
				if(j!=0 && n%j!=0){
					f = 1;break;
				}
				i = i/10;
			}
			if(f==0) printf("yes\n");
			else printf("no\n");	
		}
	}
	return 0;
}
