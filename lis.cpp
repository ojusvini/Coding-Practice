#include <stdio.h>

int main(){
	int t;
	int s[100];
	int n,i,j;
	int a[100];
	int l[100];
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
			s[i] = 0;
			l[i] = a[i];
		}
//		l[s[0]] = a[0];
		for(j=1;j<n;j++){
			for(i=0;i<j;i++){
				if(a[j]>a[i]){
					if(s[j]<s[i]+1){
						s[j] = s[i]+1;
					//	printf("s[j] = %d \t l[s[j = %d]] = %d\n",a[j], j,l[j]);
					}
				}	
			}
			l[s[j]] = a[j];
			printf("here : %d\n",l[s[j]]);
		}
		printf("\n");
		for(j=0;j<n;j++){
			printf("%d ",s[j]);
		}
		printf("\n");
		for(j=0;j<=s[n-1];j++){
			printf("%d ",l[j]);
		}
		printf("\nlength is : %d\n",s[n-1]+1);
	}
	return 0;
}
