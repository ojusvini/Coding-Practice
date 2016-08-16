#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

int main(){
	int t,i,j,c;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int a[n],b[n];
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		for(i=0;i<n;i++){
			scanf("%d",&b[i]);
		}
		sort(a,a+n);
		sort(b,b+n);
		i = j = c = 0;
		while(i!=n&&j!=n){
			if(a[i]<=b[j]){
				i++;j++;c++;
			}
			else j++;
		}
		printf("%d\n",c);
	}
	return 0;
}
