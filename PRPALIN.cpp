#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

int isprime(int n){
	if(n%2==0){
		return 0;
	}
	int i;
	for(i = 3;i<=sqrt(n);i = i+2){
		if(n%i==0)
		return 0;
	}
	return 1;
}

int reverse(int n){
	int d,rev,r= n;
	rev = 0;
	while(n){
		d = n%10;
		rev = rev*10+d;
		n = n/10;
	}
	if(r==rev) return 1;
	else return 0; 
}

int main(){
	int a,p,i;
	cin>>a;
	p=0;
	if(a%2==0)
	a=a+1;
	for(i=a;i>p;i=i+2) {
	    if((reverse(i)==1) && (isprime(i)==1)){
	    	p=i;
	    	break;
	    }
	}
	cout<<p;	
}
