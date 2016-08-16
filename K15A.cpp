#include <stdio.h>

int main()
{
	int t,n,c,i;
	scanf("%d",&t);
	int a[1001];
	while(t--){
		scanf("%d",&n);
		int b[1001]={0};
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
			b[a[i]]++;
		}
		c=0;
		for(i=1;i<1001;i++){
			if(b[i]>1) c++;
		}
		printf("%d\n",c);
	}
	return 0;
}
