#include <stdio.h>

int main(){
	int t,i,j;
	int a[55],voted[55],h[55];
	scanf("%d",&t);
	int k;
	for(k = 0;k<t;k++){
		int n;
		scanf("%d",&n);
		int s = 0,f = 0;
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
			s = s + a[i];
			if(a[i]>=n||s>n) {
				f = 1;
				continue;
			}
		}
		if(s!=n) f = 1;
		if(f==1){
			printf("-1\n");
		}
		else {
			int c,temp;
			int h[n+1];
			for(i=0;i<=n;i++) {
				voted[i] = 0;
				h[i] = 0;
			}
			for(i=0;i<n;i++){
				c = 0;
				for(j=n-1;j>=0;j--){
					if(i == j) continue;
					if(c==a[i]) break;
					if(voted[j]==0){
						voted[j] = 1;
						h[j] = i;
						c++;
					}
				}
			}
			for(i=0;i<n;i++){
				printf("%d ",h[i]+1);
			}
			printf("\n");
		}	
	}
	return 0;
}
