#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	int t,i,j,n = 10,num,f;
	int a[10];
	int b[10];
	scanf("%d",&t);
	while(t--){
		scanf("%d",&a[0]);
		num = 1;
		for(i=1;i<n;i++){
			scanf("%d",&a[i]);
			if(a[i]<a[num]) num = i;
		}
		if(a[0]< a[num]){
			printf("1");
			for(i=0;i<=a[0];i++)printf("0");
			printf("\n");
		}
		else {
			for(i=0;i<=a[num];i++)printf("%d",num);
			printf("\n");
		}
	}
	return 0;
}
