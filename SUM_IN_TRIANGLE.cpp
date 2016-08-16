#include <stdio.h>
int a[101][101];
int ans[101][101];
int maxi(int a,int b){
	return b>a?b:a;
}
int main(){
	int t,i,j;
	scanf("%d",&t);
	while(t--){
		int n,max = -999999;
		scanf("%d",&n);
		for(i=0;i<n;i++){
			for(j=0;j<=i;j++)
			scanf("%d",&a[i][j]);
		}
		max = a[0][0];
		for(i=0;i<n;i++){
			for(j=0;j<=i;j++){
				if(i==0&&j==0) 	ans[0][0] = a[0][0];
				else if(j==0) ans[i][j] = ans[i-1][j] + a[i][j];
				else if(i==j) ans[i][j] = ans[i-1][j-1] + a[i][j];
				else ans[i][j] = maxi( ans[i-1][j-1], ans[i-1][j] ) + a[i][j];
				if(ans[i][j]>max) max = ans[i][j];
			}
		}
		printf("%d\n",max);
	}
	return 0;
}
