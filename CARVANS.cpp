#include <stdio.h>

int main(){
	int t,i,j;
	scanf("%d",&t);
	while(t--){
		int n;
		j = 1;
		scanf("%d",&n);
		int a[n];
		scanf("%d",&a[0]);
		for(i=1;i<n;i++){
			scanf("%d",&a[i]);
		}
		for(i=1;i<n;i++){
			if(a[i]<=a[i-1]) j++;
			else a[i] = a[i-1];
		}
		printf("%d\n",j);
	}
	return 0;
}
