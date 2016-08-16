#include <stdio.h>

int main(){
	int t;
	int n,k,i,w;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&n,&k);
		int a[n];
		for(i=0;i<n;i++) scanf("%d",&a[i]);
		int p[k+1];
		p[0] = 0;
		for(w = 1;w<=k;w++){
			p[w] = 0;
			for(i=0;i<n;i++){
				if( a[i]<=w && p[w-a[i]] + a[i] > p[w]) {
					p[w] = p[w-a[i]] + a[i];	
				}
			}
		}
		printf("%d\n",p[k]);
	}
}
