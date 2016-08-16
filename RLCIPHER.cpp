#include <stdio.h>

int main()
{
	int a[]={-4,-3,-2,-4,-4,-3};
	int t,i,n,tm;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		for(i=0;i<n;i++){
			scanf("%d",&tm);
			if(tm<0)
				printf("%d ",tm);
			else if(tm>5)
				printf("-4 ");
			else printf("%d ",a[tm]);
		}
		printf("\n");
	}
	return 0;
}
