#include <stdio.h>
#include <string.h>
int h[100002][100002];
int n;
int visited[100005];
void dfs(int i){
	if(visited[i]==1) return;
	else {
		visited[i] = 1;
		int j;
		for(j=0;j<n;j++){
			if(h[i][j]==1&&visited[j]==0) dfs(j);
		}
	}
}
int main(){
	int t,e,i,j,a,b,c;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&n,&e);
		memset(visited,0,sizeof visited);
		for(i=0;i<n;i++){
			for(j=0;j<n;j++) h[i][j] = 0;
		}
		c = 0;
		while(e--){
			scanf("%d%d",&a,&b);
			h[a][b] = 1;
			h[b][a] = 1;
		}
		for(i=0;i<n;i++){
			if(visited[i]==0) {
				dfs(i);
				c++;
			}
		}
		printf("%d\n",c);	
	}
	return 0;	
}
