#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;

int main(){
	int t,n,m,h,d,i,c,f;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d%d",&n,&m,&h);
		int a[n];
		for(i=0;i<n;i++) scanf("%d",&a[i]);

		c=0;
		sort(a,a+n);
		i=n-1;
		while(i >= 0 && c < m ){
			while(a[i]- h > 0) {
				c++;
				a[i]-= h;
				
			}
			i--;
		}
		if(c<m) printf("NO\n");
		else printf("YES\n");
	}
	return 0;
}
