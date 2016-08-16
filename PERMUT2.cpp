#include <stdio.h>

int main(){
	int i,j,n;
	scanf("%d",&n);
	while(n!=0){
		int a[n];
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		j = 1;
		for(i=0;i<n;i++){
			if( (i+1) != a[a[i]-1] ) {
				j = 0;break;
			}
		}
		if(j== 1) printf("ambiguous\n");
		else if(j== 0) printf("not ambiguous\n");
		scanf("%d",&n);
	}
	return 0;
}
