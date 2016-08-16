#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;

int main(){
	int t,i,j,x,c,ti;
	scanf("%d",&t);
	ti = 1;
	while(t--){
		int n,m,temp;
		scanf("%d%d",&x,&n);
		int a[n];
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		sort(a,a+n);
		i = 0;j = n-1;c = 0;
		while(i!=j&&i<n&&j>=0){
			if(a[i]+a[j]==x){
				c++;
				temp = i+1;
				while(temp!=j && a[temp]+a[j]==x){
					c++;
					temp++;
				}
				j--;
			}
			else if(a[i]+a[j]>x) j--;
			else if(a[i]+a[j]<x) i++;
		}
		printf("%d. %lld\n",ti++,c);
	}
	return 0;
}
