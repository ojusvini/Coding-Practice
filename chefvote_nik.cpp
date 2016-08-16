#include <iostream>
#include<stdio.h>
using namespace std;

int main() {
	int t,n,a[51],i,sum,d,b[51],j,k,x;
	
	scanf("%d",&t);
	while(t--){
		d=sum=j=0;
		scanf("%d",&n);
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
			sum+=a[i];
			if(a[i]==n)
			d=1;
		}
		if(sum>n|| sum<n)
		d=1;
		if(d==1) {
			printf("-1\n");
		}
		else {
			for(i=n-1;i>=0;i--){
				if(a[i]>0) {
					k=a[i];
					while(a[i]--)
					b[j++]=i;
				}
			}
			for(i=0;i<n;i++){
				if(b[i]==i){
					for(j=0;j<n;j++) {
						if(b[j]!=i&& i!=b[j]) {
							x=b[j];
							b[j]=i;
							b[i]=x;
							break;
						}
					}
				}
			}
				for(i=0;i<n;i++){
			printf("%d ",b[i]+1);
		}
		printf("\n");
		}
		
	
	}
	
	return 0;
}
