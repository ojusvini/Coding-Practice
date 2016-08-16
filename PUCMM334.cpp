#include <stdio.h>

int main(){
	int n,min,max,e,i,tc = 0;
	scanf("%d",&n);
	int a[n];
	int h[100]={0};
	min = 99999999;
	max = -1;
	e = 0;
	for(i=0;i<n;i++){
			scanf("%d",&a[i]);
			if(a[i]>=n) e =1;
			if(a[i]>max) max = a[i];
			if(a[i]<min) min = a[i];
	}
	if(max-min>1) e = 1;
	if(e==1) printf("-1\n");
	else {
		for(i=0;i<n;i++){
			if(a[i]==max) h[i] = 0;
			else if(a[i]==min) h[i] = 1;
			else if(a[i]!=max&&a[i]!=min) {
				e = 1;
				break;
			}
		}
		if(e==1) printf("-1\n");
		else {
			if(max==min && max == 0) 
				tc = 0;
				else {
					tc = 0;
					for(i=0;i<n;i++){
						if(h[i] == 1)tc++;
					}
					for(i=0;i<n;i++){
						if(h[i]==1 && a[i] != tc-1){
							e = 1;
							break;
						}
						else if(h[i]==0 && a[i] != tc){
							e = 1;
							break;
						}
					}
				}
				if(e==1) printf("-1\n");
				else printf("%d\n",tc);
		}
	}
	return 0;		
}
