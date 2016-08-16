#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{	int len,i,j,f,z;
	char a[10000];
	while(scanf("%s",a)!=EOF){
		f=1;
		len=strlen(a);
		if(a[0]=='_'||isupper(a[0]))
		printf("Error!\n");
		else if(a[len-1]=='_'){
				printf("Error!\n");
		}
		else{
			f=0;
			z=4;
			for(i=1;i<len;i++){
				if(a[i]=='_'&&i<len-1&&z!=2){
					z=0;
					if(islower(a[i+1])){
						a[i]=toupper(a[i+1]);
						for(j=i+1;j<len-1;j++){
							if(islower(a[j])||a[j]=='_'){
								a[j]=a[j+1];
							}
							else{
								printf("Error!\n");
								f=1;
								break;
							}
						}
						if(f==1)break;
						len--;
					}
					else {
						printf("Error!\n");
						f=1;
						break;
					}
				}
				else if(isupper(a[i])&&z!=0)
				{	z=2;f=0;
					//printf("inside upper i = %d testing isalpha\n",i);
					if(i<len-1&&isalpha(a[i+1])){
						//printf("length = %d i+1 = %d\n",len,i+1);
						for(j=len;j>=(i+1);j--) {
						//	printf("TEsting if is alpha\n");
							if(isalpha(a[j-1])){
						//	printf("TEsting if is alpha=true\n");	
							a[j]=a[j-1];
						//	printf("Shifted %c\n",a[j]);
							}
							else {
						//		printf("TEsting if is alpha=false\n");
								f=1;
								printf("Error!\n");
								break;								
							}
						}
						if(f==1)break;
						else {
						a[i+1]=tolower(a[i]);
						a[i]='_';
						len++;
						}					
					}
					else if(i==len-1&&isupper(a[len-1])){
						a[len]=tolower(a[len-1]);
						a[len-1]='_';
						len++;
					}
					else {
						printf("Error!\n");
						f=1;
						break;
					}
				}
			}
			
			if(f==0){
					for(i=0;i<len;i++)printf("%c",a[i]);
					printf("\n");
			}
			
		}
	}
	return 0;
}

