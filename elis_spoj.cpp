#include <stdio.h>

int main(){
	int s[100];
	int n,i,j,max;
	int a[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		s[i] = 0;
	}
//		l[s[0]] = a[0];
	for(j=1;j<n;j++){
		for(i=0;i<j;i++){
			if(a[j]>a[i]){
				if(s[j]<s[i]+1){
					s[j] = s[i]+1;
				}
			}	
		}
	}
	max = s[0];
	for(i=1;i<n;i++){
		if(s[i]>max){
			max = s[i];
		}
	}
	printf("%d\n",max+1);
	return 0;
}
