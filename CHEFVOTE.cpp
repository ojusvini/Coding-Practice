#include <stdio.h>

int main(){
	int t,i,j;
	scanf("%d",&t);
	int k,n;
	int a[51];
	int h[51];
	while(t--){
		scanf("%d",&n);
	
		int s = 0,f = 0;
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
			s = s + a[i];
			if(a[i] == n) {
				f = 1;
			}
		}
		if(s != n) f =1 ;
		if(f == 1){
			printf("-1\n");
		}
		else {
			j = 0;
			int c,temp;
			for(i=n-1;i>=0;i--){
				c = a[i];
				if(a[i]>0) {
					while(a[i]--)
					h[j++]=i;
				}
			}
			for(i=0;i<n;i++){
				if(h[i]== i){
					for(j=0;j<n;j++){
						if( h[j] != i && j != i){
							temp = h[j];
							h[j] = i;
							h[i] = temp;
							break;
						}	
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
