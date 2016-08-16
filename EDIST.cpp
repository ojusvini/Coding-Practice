#include<stdio.h>
#include<string.h>

int min(int a,int b,int c) {
	if(b<a&&b<c) return b;
	else if(c<a && c<b) return c;
	else return a;
}

char x[2009];
char y[2009];
int E[2005][2005];
int main() {
	int t;
	scanf("%d",&t);
	while(t--){
		 scanf("%s%s",x,y);
		int m=strlen(x);
		int n=strlen(y);
		int i;
		for(i=0;i<=n;i++){
			E[0][i]=i;
		}
		for(i=0;i<=m;i++){
			E[i][0]=i;
		}
		int j;
		int d1,d2,d3;
		for(i=1;i<=m;i++) {
			for(j=1;j<=n;j++) {
				d1=((x[i-1]==y[j-1])?0:1)+E[i-1][j-1];
         		d2=E[i][j-1]+1; 
		    	d3=E[i-1][j]+1;
		    
				if(d1<d2&&d1<d3)
               		E[i][j]=d1;
            	else{
            		if(d2<d3)
            	   		E[i][j]=d2;
         	     	else
         	     		E[i][j]=d3;
            	}	
			}
		}
		printf("%d\n",E[m][n]);
	}
	
	return 0;
}
