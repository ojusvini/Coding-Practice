#include <stdio.h>

int main(){
	int t,i,j,n = 10;
	int a[10];
	scanf("%d",&t);
	while(t--){
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		i = 0;
		n = 0;
		while(1){
			i = (i+1)%10;
			if(a[i]!=0){
				n++;
				a[i]--;
			}
			else {
				break;
			}
		}
		printf("%d\n",n);
	}
	return 0;
}
