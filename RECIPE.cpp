#include <stdio.h>

int gcd(int a,int b){
	if(b==0) return a;
	else return gcd(b,a%b);
}

int main(){
	int t,i,j;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int a[n];
		scanf("%d",&a[0]);
		j = a[0];
		for(i=1;i<n;i++){
			scanf("%d",&a[i]);
			j = gcd(a[i],j);
		}
		for(i=0;i<n;i++){
			printf("%d ",a[i]/j);
		}
		printf("\n");
	}
	return 0;
}
