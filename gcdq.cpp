#include <stdio.h>

#define gc getchar_unlocked
int a[100010];
int gcd(int a,int b){
	if(a<b)
	return gcd(b,a);
	if(b==0)
	return a;
	else return gcd(b,a%b);
}
void scanint(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}

int main(void)
{
	int t,n,q,l,r,i,j,k,g,f;	
	scanint(t);
	while(t--){
		scanint(n);
		scanint(q);
		for(i=1;i<=n;i++)
		scanint(a[i]);
		while(q--){
			scanint(l);
			scanint(r);
			f=0;
			for(j=1;j<=n;j++){
				if(j<l||j>r){
					if(f==0){
						g=a[j];
						f=1;
					}
					else g = gcd(g,a[j]);	
				}
			}
			printf("%d\n",g);
		}	
	}
	return 0;
}
