#include <stdio.h>
#include <string.h>
#define cl(b) memset(b,0,sizeof(b))
int d=65,k=0,p,dr[100000],q=0,c=1,h,w;
char a[50][50],b[50][50];

int dfs(int i,int j){
	d++;
	int m,n,v;
	b[i][j]=1;
	for(m=-1; m<2; m++){
		for(n=-1; n<2; n++){
			if((m!=0||n!=0)&&i+m>=0&&i+m<h&&j+m>=0&&j+m<w){
				if(a[i+m][j+n]==d&&b[i+m][j+n]==0){
					c++;
					v = dfs(i+m,j+n);
					dr[k]=v;
					k++;
					d--;
					c--;	
				}
			}			
		}
	}
	b[i][j]=0;
	return c;
} 
int main()
{
	int i,j,g,ctr=1;
	while(1){
		q = 0;
		scanf("%d%d",&h,&w);
		if(h==0 && w==0) break;
		getchar();
		for(i=0;i<h;i++){
			scanf("%s",a[i]);
			getchar();
		}
		for(i=0;i<h;i++){
			for(j=0;j<w;j++){
				if(a[i][j]=='A'){
					p=dfs(i,j);
					for(g=0;g<k;g++){
						if(dr[g]>p){
						p=dr[g];
						}
					}
				if(p>q)
				q = p;
				d=65;
				k=0;
				c=1;cl(b);
				}
			}
		}
		printf("Case %d: %d\n",ctr++,q);
	}
	return 0;
}
