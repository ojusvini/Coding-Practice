#include <stdio.h>

int main(){
	int t,i,j;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int a[n];
		int c = 0;
		int d[105] = {0};
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
			if(d[a[i]]==0){
				c++;
				d[a[i]] = 1;
			} 
		}
		printf("%d\n",c);
	}
	return 0;
}
