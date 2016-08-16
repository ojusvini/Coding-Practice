#include <stdio.h>
#define m 1000000007

void quicksort(long long int x[],long long int first,long long int last){
    long long int pivot,j,temp,i;
 
     if( first < last){
         pivot = first;
         i = first;
         j = last;
 
         while( i < j ){
             while( x[i] <= x[pivot] && i < last )
                 i++;
             while( x[j] > x[pivot])
                 j--;
             if(i < j){
               
			     temp = x[i];
                  x[i]=x[j];
                  x[j]=temp;
             }
         }
 
         temp=x[pivot];
         x[pivot]=x[j];
         x[j]=temp;
         
         quicksort(x,first,j-1);
		 quicksort(x,j+1,last);
 
    }
}
 
long long int modular_pow(long long int base,long long int exp)
{
	long long int result = 1;
	while (exp > 0) {
		if (exp %2 == 1)
		result=(result*base) % m;
		exp = exp / 2;
		base = (base * base) % m;
	}
	return result;
}

int main() {

	long long int t , n , i , j , k , ans, c, b;
	
	scanf("%lld",&t);
	
	while(t--){
	
		ans = 0;
		scanf("%lld",&n);
		long long int a[n];
	
		for(i = 0; i < n; i++){
			scanf("%lld",&a[i]);
		}
	
		quicksort(a,0,n-1);
		c = 0;
		b = 1;
	
		for(i = 0; i < n; i++){
			c = (c + ((b*a[i])%m))%m;
			b = (b*2)%m;	
		}
	
		ans = 0;
		b = 1;
		for(i=n-1;i>=0;i--){
			ans = (ans + (b*a[i])%m)%m;
			b = (b*2)%m;
		}
	
		printf("%lld\n",(c-ans+m)%m);
	}
	
	return 0;
}
