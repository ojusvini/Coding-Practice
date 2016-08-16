#include <iostream>
#include <stdio.h>
#include <map>
using namespace std;

map <long long int , long long int> coins;
	
long long int getMax(long long int a,long long int b){
	return a>b?a:b;
}

long long int getcoin(long long int n){
	if(coins[n]!=0) return coins[n];
	else {
		coins[n] = getMax(n,getcoin(n/2)+getcoin(n/3)+getcoin(n/4));
		return coins[n];
	}
}
int main(){
	long long int n;
	long long int i;
	for(i=0;i<11;i++){
		coins[i] = i;
	}
	
	while(cin>>n) {
		cout<<getcoin(n)<<"\n";
	}
	
	return 0;
}
