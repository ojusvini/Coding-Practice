# include <stdio.h>
# include <math.h>
 
// A function to print all prime factors of a given number n
int primeFactors(int n)
{	
	int i,c = 0;
	for(i=1;i<sqrt(n);i++){
		if(n%i==0) c +=2;
		if(c>3) return 0;
	}
	if(sqrt(n)*sqrt(n) == n) c++;
	if(c<4) return 1;
	else return 0;
}
 
/* Driver program to test above function */
int main()
{
    int t,i,n;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		i = primeFactors(n);
		if(i == 1) printf("NO\n");
		else printf("YES\n");		
	}
    return 0;
}
