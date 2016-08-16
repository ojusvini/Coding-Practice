#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main(){
	int t,i,j,k,l,c;
	scanf("%d",&t);
	while(t--){
		int n,m;
		scanf("%d%d",&n,&m);
		int a[n+1];
		memset(a,0,sizeof(a));
		for(i=0;i<m;i++){
			scanf("%d",&j);
			a[j] = 1;
		}
		c = 1;
		for(i=1;i<=n;i++){
			if(a[i]==0){
				if(c&1) a[i] = 2;
				else a[i] = 3;
				c++;
			}
		}
		for(i=1;i<=n;i++){
			if(a[i]==2) printf("%d ",i);
		}
		printf("\n");
		for(i=1;i<=n;i++){
			if(a[i]==3) printf("%d ",i);
		}
		printf("\n");
	}
	return 0;
}
