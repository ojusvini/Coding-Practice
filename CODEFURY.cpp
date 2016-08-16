#include <stdio.h>
int a[100000];
int main()
{
	int t,p,m,i,j,max,mins,n,d;
	int s,maxs;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&p,&m);
		for(i=0;i<p;i++){
			scanf("%d",&a[i]);
		}
		j=0;
		s=0,mins=1000000,n=0,max=0;
		for(i=0;i<p;i++){
			s+=a[i];
			n++;
			while(s>m){
				s=s-a[j++];
				n--;
			}
			if(n>=max){
				if(n==max){
					if(s<mins) mins=s;
				}
				else {
					max=n;
					mins = s;
				}				
			}
		}
	printf("%d %d\n",mins,max);
	}
	return 0;
}
