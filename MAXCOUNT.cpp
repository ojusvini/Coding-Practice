#include <stdio.h>
#include <string.h>

int main(){
	int b[10001];
	int t,n,i;
	scanf("%d",&t);
	while(t--){
		int m;
		scanf("%d",&n);
		int a[n];
		memset(b,0,10001*sizeof(int));
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
			b[a[i]]++;
		}
		m = 0;
		for(i=1;i<10001;i++){
			if(b[m]<b[i])
			m = i;	
		}
		printf("%d %d\n",m,b[m]);
	}
	return 0;
} 
