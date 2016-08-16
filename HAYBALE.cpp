#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
int a[1000003];
inline void scan(int &a){ 
    char ch=a=0; 
     while(ch<33)    ch=getc(stdin); 
    while(ch>33)    a=a*10+ch-'0',ch=getc(stdin); 
} 	
int main(){
	int n,k,l,u,i;
	 scan(n),scan(k); 
	while(k--){
		 scan(l),scan(u);
		for(i=l-1;i<u;i++) a[i]++;
	}
	sort(a,a+n);
	for(i=0;i<n;i++) printf("%d\n",a[i]);
	printf("%d\n",a[n/2]);
	return 0;
}
