#include <stdio.h>

int main(){
	int t,i,j;
	int n,d,c;
	scanf("%d",&n);
	while(n!=0){
		int a[n];
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		c = 0;
		for(i=0;i<n;i++){
			if(a[i]>0){
				for(j=1;j<n&&a[i]!=0;j++){
					if(i-j>=0){
						if(a[i-j]<0){
							d = a[i-j];
							if(d+a[i]>0) {
								c = c + ((-d) *(j));
								a[i] = a[i]+a[i-j];
								a[i-j] = 0;	
							}
							else {
								c=c+(a[i]*j);
								a[i-j] = a[i]+a[i-j];
								a[i] = 0;	
							}
						}	
					}
					if(a[i]>0&&i+j<n){
						if(a[i+j]<0){
							d = a[i+j];
							if(d+a[i]>0) {
								c = c + ((-d) *(j));
								a[i] = a[i]+a[i+j];
								a[i+j] = 0;	
							}
							else {
								c=c+(a[i]*j);
								a[i+j] = a[i]+a[i+j];
								a[i] = 0;	
							}
						}
					}
					if(i-j<0&&i+j>=n) break;
				}
			}
		}
		printf("%d\n",c);
		scanf("%d",&n);
	}
	return 0;
}
