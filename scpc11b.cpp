#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;

int main(){
	int t,i,j,f,n,c,d;
	while(1){
		scanf("%d",&n);
		if(n==0) break;
		int a[n];
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		sort(a,a+n);
		c = 0;
		f = 0;
		d = 0;
		if(2*(1422-a[n-1])>200) printf("IMPOSSIBLE\n");
		else {
			for(i=0;i<n;i++){
				if(a[i] == 0) c = 200;
				else c = c-(a[i]-a[i-1]);
				if(c<0){
					f = -1;
					break;
				}
				else {
					c = 200;
					d = a[i];
				}
			}
			if(f == -1 || d + c<1422) printf("IMPOSSIBLE\n");//printf("POSSIBLE\n");
			else {
				c = c - 2 *(1422-d);
				if(c>=0) printf("POSSIBLE\n");
				else printf("IMPOSSIBLE\n");
			}	
		}
	}
	return 0;
}
