#include <stdio.h>
#include <string.h>
int a[100005];
int b[100005];

int main(){
	int n,t,i,max;	
	scanf("%d",&t);
	while(t--){
	memset(b,0,sizeof(b));
	scanf("%d",&n);
	max = 0;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		b[a[i]]++;
		if(b[a[i]]>max) max = b[a[i]];
	}
	printf("%d\n",n-max);	
	}
	return 0;	
}
