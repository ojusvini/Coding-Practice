#include <stdio.h>
#include <string.h>
double a[1000003];
double findwealth(int n,double w){
	int p;
	if(n<=1) return w;
	else p = n/2;
	if(p&1){
		if(n&1) a[n] = findwealth(p,w/4.0);
		else a[n] =  findwealth(p,w/2.0);
	}
	else {
		a[n] = findwealth(p,w/2.0);
	}
	return a[n];
}

int main(){
	int t,i,j,x,y,p,m;
	double w;
	scanf("%d",&t);
	a[0] = 0;
	while(t--){
		memset(a,0,sizeof(a));
		scanf("%d%d%lf",&x,&y,&w);
		m = (int)w;
		while(x>1){
			p = x/2;
			if(p&1){
				if(x&1) m = m*4;
				else m = m*2; 
			}
			else {
				m = m*2;
			}
			x = p;
		}
		w = (double)m;
		a[1] = w;
		printf("%0.6lf\n",findwealth(y,w));
	}
	return 0;
}
