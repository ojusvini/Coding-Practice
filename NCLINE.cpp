#include <stdio.h>

int main(){
	int t,i,j;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		long long int a[n],cur,left;
		for(i=0;i<n;i++){
			scanf("%lld",&a[i]);
		}
		left = 1;
	//	printf("left = %d\n",left);
		cur = left;
	//	printf("current = %d\n",cur);
		for(i=0;i<n;i++){
			left = cur-a[i];
	//		printf("left = %d\n",left);
			cur = 2*left;
	//		printf("current = %d\n",cur);
		}
	//	printf("left = %d\n",left);
		if(left==0) printf("Yes\n");
		else printf("No\n");
	}
	return 0;
}
