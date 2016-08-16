#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
	int t,n,i,s,f;
	int a[66];
	long long ans;
	scanf("%d",&t);
	while(t--){
		f=1;
		scanf("%d",&n);
		for(i=0;i<n;i++) scanf("%d",&a[i]);
		sort(a,a+n);
		ans=a[0];
		s=1;
		for(i=1;i<n;i++) {
			if(a[i]-s==0) {
				f=0;
				printf("0\n");
				break;
			}
			else {ans*=(a[i]-s);
			if(ans>=1000000007)ans=ans%1000000007;
			s++;
			}
		}
		if(f==1) printf("%lld\n",ans);		
	}
	printf("KILL BATMAN\n");
	return 0;
}
