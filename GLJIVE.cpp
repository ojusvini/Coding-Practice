#include <stdio.h>
#include <math.h>
int main(){
	int a[10];
	int s = 0;
	int t = 10,i = 0;
	for(i = 0;i<10;i++){
		scanf("%d",&a[i]);
	}
	for(i = 0;i<10;i++){
		if(abs(100-s)==abs(100-(s+a[i]))) s = s+a[i];
		else if(abs(100-s)>abs(100-(s+a[i])))
		s=s+a[i];
		else break;
	}
	printf("%d\n",s);
	return 0;
}
