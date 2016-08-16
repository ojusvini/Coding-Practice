#include <stdio.h>
#define mx 10001

int main(){
	int t,i,j;
	scanf("%d",&t);
	while(t--){
		int n,tc;
		int h[mx] = {0};
		scanf("%d",&n);
		int a[n];
		int e = 0;
		scanf("%d",&a[0]);
		int max,min;
		max = a[0];
		min = a[0];
		for(i=1;i<n;i++){
			scanf("%d",&a[i]);
			if(a[i]>=n) e = 1;
			else {
				if(a[i] > max) max = a[i];
				else if(a[i]<min) min = a[i];
			}
		}
	//	printf("Here max = %d min = %d\n");
		if(max-min>1) {
			e = 1;
		
		}
		else {
			for(i=0;i<n;i++){
				if(a[i] == max){
					h[i] = 0;
				//	printf("Here 0\n");
				}
				if(a[i] == min ){
					h[i] = 1;
					
				}
				else if(a[i] !=max && a[i] != min) {
					e = 1;
					break;
				}
			}
			if(max==min && max == 0) {
					tc = 0;
			//		e = 0;
			}	
			else {
				tc = 0;
				for(i=0;i<n;i++){
					if(h[i] == 1)tc++;
				}
				 //printf("%d\n", tc);
				for(i=0;i<n;i++){
					if(h[i]==1 && a[i] != tc-1){
						e = 1;
						break;
					}
					else if(h[i]==0 && a[i] != tc){
						e = 1;
				//		printf("Here -1\n");
						break;
					}
				}
			}
		}
		if(e==1) printf("-1\n");
                else
                  printf("%d\n", tc);	
	}
	return 0;
}
