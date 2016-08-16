#include <stdio.h>

int main() {
	int t,s,n,k,i,a;
	scanf("%d",&t);
	while(t--) {
		s=0;
		scanf("%d%d",&n,&k);
		for(i=0;i<n;i++){
			scanf("%d",&a);
			s=s+a;
		}
		if(s%k){
			printf("%d\n",(s/k)+1);
		}
		else printf("%d\n",s/k);		
	}
	return 0;
}
