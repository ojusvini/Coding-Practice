#include <stdio.h>
#include <string.h>

int main(){
	int t,i,j,n,s;
	char m;
	scanf("%d",&t);
	char a[100005];
	while(t--){
		scanf("%s",&a);
		n = strlen(a);
		s = 0;
		if(n==1)
			printf("%s\n",a);
		else if(n==2){
			if(a[0]==a[1]){
				printf("-1\n");
			}
			else {
				printf("%s\n",a);
			}
		}
		else if(n>2){
			int c[27] = {0};
			for(i=0;i<n;i++){
				c[a[i]-96]++;
			}/*
			for(i=0;i<27;i++){
				printf("%d ",c[i]);
			}*/
//			printf("\n");
			int f = 0;
			for(i=0;i<27;i++){
				if(c[i] > n - c[i] + 1) {
	//				printf("%d %d ",c[i],n);
					f = 1;
					break; 
				}
			}
	//		printf("\n");
			if(f==1){
				printf("-1\n");
			}
			else {
				char b[n+1];
				memset(b,'1', n * sizeof(char));
				b[n-1] = '1';
				b[n] = '\0';
//				printf("%s\n",b); 
				b[0] = a[0];
				c[a[0]-96]--;
//				printf("%s\n",b); 
				for(i=1;i<27;i++){
					m = i + 96;
					for(j = 1;j<n&&c[i]>0;j++){
						if(b[j] == '1'){
							if(j == n-1 && b[j-1] != m){
								//printf("Testing n-1 for %c \n",m); 
								b[j] = m;
								c[i]--;
							}
							else if( b[j-1] != i + 96 && b[j+1] != i+96){
								//printf("Testing %dth position for %c \n",j,m);
								b[j] = m;
								c[i]--;
							}
						}
					}
				}
				int in;
				char cl = '1';
				for(i=0;i<27;i++){
					if(c[i]!=0){
						cl = i+96;
						for(i=0;i<n;i++){
							if(b[i]=='1'){
								in = i;
								break;
							}
						}
						break;	
					}
				}
				if(cl!='1'){
				if(b[0]!=cl && b[1]!=cl){
					b[in] = b[0];
					b[0] = cl;
				}
				else {
					for(i=0;i<n-2;i++){
						if( b[i] != cl && b[i-1] != cl && b[i+1] != cl){
							b[in] = b[i];
							b[i] = cl;
							break;
						}
					}	
				}	
				}
				b[n] = '\0';
				printf("%s\n",b);
			}
			
		}	
		
	}
	return 0;
}
