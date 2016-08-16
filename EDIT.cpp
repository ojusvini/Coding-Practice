#include <stdio.h>
#include <ctype.h>
char a[1002];
char b[1002];
char c[1002];
int main(){
	int i,c1,c2;
	while(scanf("%s",a)!=EOF){
		c1 = c2=0;
		b[0] = toupper(a[0]);//uppercase
		for(i=1;a[i]!='\0';i++){
			if(isupper(b[i-1])&&isupper(a[i])){
				b[i] = tolower(a[i]);
				c1++;	
			}else if(islower(b[i-1])&&islower(a[i])){
				b[i] = toupper(a[i]);c1++; 
			}
			else b[i] = a[i]; 
		}
		c[0] = tolower(a[0]);//lowercase
		for(i=1;a[i]!='\0';i++){
			if(isupper(c[i-1])&&isupper(a[i])){
				c[i] = tolower(a[i]);c2++;
			}
			else if(islower(c[i-1])&&islower(a[i])){
				c[i] = toupper(a[i]);c2++;
			}
			else c[i] = a[i];
		}
		if(isupper(a[0])) c2++;
		else c1++;
		if(c1<c2) printf("%d\n",c1);
		else printf("%d\n",c2);
	}
	return 0;
}
