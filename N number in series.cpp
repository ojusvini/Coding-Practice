/*int a[]= {
	3, 4, 33, 34, 43, 44, 333, 334, 343, 344, 433, 434, 443, 444, 3333, 3334, 3343, 3344……..
	1  2   3   4   5   6   7    8    9    10   11   12   13  14
}*/

#include<stdio.h>
#include <math.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i,l;
	int c = 0,s=0;
	i = 1;
	while(s<n){
		i = i*2;
		s = s+i;
		c++;
	}
	s = s-i;
	n = n-s;
//	printf("c = %d i = %d l = %d sum = %d n = %d\n",c,i,l,s,n);
	int a[32] = {0};
	int b = n-1;
	l = 0;
	while(l<c){
		a[l] = b%2;
		b = b/2;
		l++;
	}
//	for(i=0;i<c;i++) printf("%d",a[i]);
	
	for(i = c-1;i>=0;i--){
		if(a[i]==0) printf("3");//ch[i] = '3';
		else printf("4");
	}
/*	ch[l] = '\0';
	for(i = c-1;i>=0;i--){
		printf("%c",ch[i]);
	}
	//
	//printf("%s\n",ch);
	*/
}


