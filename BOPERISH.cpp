#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
	int n,i,c;
	int a[1010];
	cin>>n;
	while(1){
		if(n==0)break;
		else {
			c=0;
			for(i=0;i<n;i++) cin>>a[i];
			sort(a,a+n);
			for(i=n-1;i>=0;i--){
				if(a[i]>=n-i)c++;
				else break;				
			}
			cout<<c<<"\n";
		}
		cin>>n;
	}
	return 0;
}
