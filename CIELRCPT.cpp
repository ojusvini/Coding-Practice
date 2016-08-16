#include <stdio.h>

int main(){
	int p[] = {	2048,1024,512,256,128,64,32,16,8,4,2,1};
	int t,i,c,n;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		c = 0;
		i = 0;
		while(n!=0){
			if( n-p[i] >= 0){
			//	printf("first n= %d p = %d\t",n,p[i]);
				n = n - p[i];
			//	printf("After Subtracting n= %d\n",n);	
				c++;
			}
			else i++;
		}
		printf("%d\n",c);
	}
}
