#include <stdio.h>
#include <string.h>
int main(){
	long long int t,f;
	long long int n,i,j,m,min,max,l,l1;
	char a[100005];
	scanf("%lld",&t);
	while(t--){
		scanf("%s",a);
		l = strlen(a);
		scanf("%lld%lld",&m,&n);
		if(m==n){
			min = l;
			max = l;
		}
		else{
			l1 = 0;
			for(i=0;i<l;i++){
				if(a[i] == 97){
					f = 0;
					for(j=i+1;j<i+m;j++){
						if(j==l||a[j] != 'a'){
							f = 1;
							break;
						}
					}
					if(f==0) {
						a[j-1] = 'b';
						l1+=n;
						i = j-1;
					}
					else if(f==1){
						l1++;
					}
				} else l1++;
			}
			if(m<n){
				min = l;
				max = l1;
			}
			else {
				min = l1;
				max = l;
			}
		}
		printf("%lld %lld\n",min,max);
	}
	return 0;
}

