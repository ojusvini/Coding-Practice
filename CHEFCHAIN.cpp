/* '-' or '+
 ++-+-+-+-+
 +-+-+-+-+-
 
 +-+-++-+-+
 
 +-+-+-+-+-
 -+-+-+-+-+*/
 #include <stdio.h>
 #include <string.h>
 char s[100005];
 char a[100005];
 char b[100005];
 int main()
 {
 	
 	int t,i,j,c1,c2;
 	scanf("%d",&t);
 	while(t--){
 		scanf("%s",s);
 		int l = strlen(s);
 		strcpy(a,s);
// 		strcpy(b,s);
 		c1 = 0;
 		c2 = 0;
 		for(i=0;i<l-1;i++){
 			if(a[i]=='+'){
 				if(a[i+1]=='+'){
 					a[i+1]='-';
 					c1++;
 				}
 			}
 			else if(a[i]=='-'){
 				if(a[i]=='-'){
 					if(a[i+1]=='-'){
 					a[i+1]='+';
 					c1++;	
 					}
 				}
 			}
 		}
 		for(i=l-1;i>0;i--){
 			if(s[i]=='+'){
 				if(s[i-1]=='+'){
 					s[i-1]='-';
 					c2++;
 				}
 			}
 			else if(s[i]=='-'){
 				if(s[i]=='-'){
 					if(s[i-1]=='-'){
 					s[i-1]='+';
 					c2++;	
 					}
 				}
 			}
 		}
 		if(c1<=c2)printf("%d\n",c1);
 		else printf("%d\n",c2); 		
 	}
 	return 0;
 }
