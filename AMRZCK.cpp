#include <stdio.h>
int a[48];
int main(){
	int t,n,i;
	scanf("%d",&t);
	a[0] = 1;a[1] = 2;
	for(i=2;i<45;i++) a[i] = a[i-1]+a[i-2];
	while(t--){
		scanf("%d",&n);
		printf("%d\n",a[n]);
	}
	return 0;
}
