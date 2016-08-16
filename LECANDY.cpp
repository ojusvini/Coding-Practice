#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	int t,i,j,n,c,s;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&n,&c);
		int a[n];
		s = 0;
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
			s+=a[i];
		}
		if(s<=c) printf("Yes\n");
		else printf("No\n");
		
	}
	return 0;
}
