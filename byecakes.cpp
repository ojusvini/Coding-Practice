#include <stdio.h>

int main() {
	int a[4];
	int b[4];
	int r[4];
	int i;
	int max;
	while(1) {
	
	for( i = 0 ; i < 4 ; i++) {
		scanf("%d",&a[i]);
	}
	
	
	for( i = 0 ; i < 4 ; i++) {
		scanf("%d",&b[i]);
		r[i] = a[i]/b[i];
	}
	if(a[0]== -1)
	break;
	
	
	max = r[0];
	for( i = 1 ; i < 4; i ++) {
		if(r[i] > max)
		max= r[i];
		
	}

	for( i = 0 ; i < 4 ; i++ ) {
	
	r[i] = b[i]*max - a[i];
	printf("%d ",r[i]);
	
	}
	printf("\n");
	}
	return 0;
	

}
