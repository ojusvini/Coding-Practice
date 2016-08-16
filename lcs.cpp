#include <stdio.h>
#include <string.h>
int c[250000][250000];
//char b[250000][250000];
void lcs(char x[],char y[])
{
	int m,n,i,j;
	m = strlen(x);
	n = strlen(y);	
	for(i=0;i<=m;i++){
		for(j=0;j<=n;j++){
			if(i ==0||j==0)
				c[i][j] = 0;
			else if(x[i-1]==y[j-1]){
				c[i][j] = c[i-1][j-1]+1;
//				b[i][j] = 'd';
			}
			else if(c[i-1][j]>=c[i][j-1]){
				c[i][j] = c[i-1][j];
//				b[i][j] = 'u';
			}
			else {
				c[i][j] = c[i][j-1];
//				b[i][j] = 's';
			}
		}
	}
	printf("%d\n",c[m][n]);
}
int main()
{
	int t;
	char x[250000],y[250000];
	//scanf("%d",&t);
	//while(t--){
		scanf("%s",x);
		scanf("%s",y);		
		lcs(x,y);
	//}
}
