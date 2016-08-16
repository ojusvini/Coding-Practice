#include <stdio.h>
#include <string.h>
#define max 1000000002

bool arr[1000000002];
void SieveOfEratosthenes()
{	long long int num,j,i;
    memset(arr, 0, sizeof(arr));
    arr[1] = 1;
    for (i = 2; i < sqrt(1000000000);i++)
    {
        if ( arr[i] == 0 )
        {	printf("%lld\n", i+1);
            j = i*i;
            num = j*(i+1);
			while ( num <= 1000000002 ){
			        arr[ num-1 ] = 1;
			        printf("here = %lld\n", num);
					j++;
					num = j*(i+1);
			}
        }
    }
}
 
int main(){
	int t;
	long long int n,m,i;
	SieveOfEratosthenes();
	scanf("%d",&t);
	while(t--){
		scanf("%lld%lld",&m,&n);
		for(i=m-1;i<n;i++){
			if(arr[i]==0)  printf("%lld\n", i+1);
		}
	}
	return 0;
}
