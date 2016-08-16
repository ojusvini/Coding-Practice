#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	int t,i,j,n = 10,num,f;
	int a[10];
	int b[10];
	scanf("%d",&t);
	while(t--){
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		f = 0;
		j = 1;
		while(1){
			num = j;
			f = 0;
			for(i=0;i<10;i++) b[i] = a[i];
			while(num){
				if(b[num%10]!=0){
					b[num%10]--;
					num = num/10;
				}
				else {
					f = 1;
					break;
				}
			}
			if(f==1){
				break;
			}
			else j++;
		}
		printf("%d\n",j);
	}
	return 0;
}
