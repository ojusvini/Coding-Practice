#include <stdio.h>
#include<math.h>
#define mod 1000000007
 
long long int modular_pow(long long int base, long long int exponent)
{
long long int result = 1;
while (exponent > 0)
{
if (exponent % 2 == 1)
result = (result * base) % 1000000007;
exponent = exponent /2;
base = (base * base) % 1000000007;
}
return result;
}
 
void quicksort(long long int x[],long long int first,long long int last){
    long long int pivot,j,temp,i;
 
     if(first<last){
         pivot=first;
         i=first;
         j=last;
 
         while(i<j){
             while(x[i]<=x[pivot]&&i<last)
                 i++;
             while(x[j]>x[pivot])
                 j--;
             if(i<j){
                 temp=x[i];
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
 
int main(void) {
	// your code goes here
	long long int t,n,i,j,k,l,a[100000];
	scanf("%lld",&t);
	while(t--){l=0;
		scanf("%lld",&n);
		for(i=0;i<n;i++){
			scanf("%lld",&a[i]);
		}
	quicksort(a,0,n-1);
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			l+=(((a[j]-a[i])%mod)*((int)modular_pow(2,j-i-1)%mod))%mod;
		}
	}
	printf("%lld\n",l%mod);
	}
	return 0;
}
