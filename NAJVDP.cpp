#include <stdio.h>

int main(){
	int n,s,i,d;
	scanf("%d%d",&n,&s);
	int a[n];
	d=0;
	
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		d=d+a[i];
	}
	
	d=d-a[n-1];
	
	if(d<=s)printf("YES\n");
	else printf("NO\n");
	return 0;
}
