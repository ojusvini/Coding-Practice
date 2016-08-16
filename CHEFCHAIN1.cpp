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
 		c1=0;
 		c2=0;
 		scanf("%s",s);
 		int l = strlen(s);
		for(i=0;i<l;i++){
			if(i%2==0){
				a[i] = '+';
				b[i] = '-';				
			}
			else {
				a[i] = '-';
				b[i] = '+';
			}
		}
 		for(i=0;i<l;i++){
 			if(s[i]!=a[i]) c1++;
 			if(s[i]!=b[i]) c2++;
 		}
 		
 		if(c1<=c2)printf("%d\n",c1);
 		else printf("%d\n",c2); 		
 	}
 	return 0;
 }
