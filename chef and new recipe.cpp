#include <stdio.h>

int main()
{
	int t;
	scanf("%d",&t);
	int n,min;
	while(t--){
		int c = 0;
		int f = 0;
		scanf("%d",&n);
		if(n==0) printf("-1\n");
		int a[n+1],i;
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		if(a[0]<2) f = 1;
		else {
			min = a[0];
			c = a[0];
			for(i=1;i<n;i++){
				if(a[i]<2){
					f = 1;
					break;
				}
				else {
					if(a[i]<min) min = a[i];
					c = c + a[i];	
				}
			}
		}
		
		if(f==1) printf("-1\n");
		else printf("%d\n",c-min+2);
	}
	return 0;
}
