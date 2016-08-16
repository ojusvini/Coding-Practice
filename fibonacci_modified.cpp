#include <stdio.h>
#include <string.h>
#include <ctype.h>

char * add(char s1[],char s2[]){
	int a[255], b[255], sum[255],carry = 0,k = 0,i,j;
	char ans[255];
	int l1, l2;
	for (l1 = 0; s1[l1] != '\0'; l1++)
	a[l1] = s1[l1] - '0';
	
	for (l2 = 0; s2[l2] != '\0'; l2++)
	b[l2] = s2[l2] - '0';
	
	i = l1 - 1;
	j = l2 - 1;
	
	for (; i >= 0 && j >= 0; i--, j--, k++) {
	sum[k] = (a[i] + b[j] + carry) % 10;
	carry = (a[i] + b[j] + carry) / 10;
	}
	
	if (l1 > l2) {
		while (i >= 0) {
		sum[k++] = (a[i] + carry) % 10;
		carry = (a[i--] + carry) / 10;
		}	
	}
	else if (l1 < l2) {
		while (j >= 0) {
		sum[k++] = (b[j] + carry) % 10;
		carry = (b[j--] + carry) / 10;
		}
	}
	else {
		if (carry > 0)
		sum[k++] = carry;
	}
	i = 0;
//	printf("k  = %d\n",k);
	for (k = k-1; k >= 0; k--){
			ans[i] = sum[k] + '0';
			i++;
	}
//	printf("i  = %d\n",i);
	ans[i] = '\0';
	return ans;
}
char * multiply(char a[],char b[]){
    char mul[255];
    char c[255];
    char temp[255];
    int la,lb;
    int i,j,k=0,x=0,y;
    long int r=0;
    long sum = 0;
    la=strlen(a)-1;
        lb=strlen(b)-1;
   
        for(i=0;i<=la;i++){
                a[i] = a[i] - 48;
        }

        for(i=0;i<=lb;i++){
                b[i] = b[i] - 48;
        }

    for(i=lb;i>=0;i--){
         r=0;
         for(j=la;j>=0;j--){
             temp[k++] = (b[i]*a[j] + r)%10;
             r = (b[i]*a[j]+r)/10;
         }
         temp[k++] = r;
         x++;
         for(y = 0;y<x;y++){
             temp[k++] = 0;
         }
    }
   
    k=0;
    r=0;
    for(i=0;i<la+lb+2;i++){
         sum =0;
         y=0;
         for(j=1;j<=lb+1;j++){
             if(i <= la+j){
                 sum = sum + temp[y+i];
             }
             y += j + la + 1;
         }
         c[k++] = (sum+r) %10;
         r = (sum+r)/10;
    }
    c[k] = r;
    j=0;
    for(i=k-1;i>=0;i--){
         mul[j++]=c[i] + 48;
    }
    mul[j]='\0';
    return mul;
}

int main(){
	double f,b;
	int n,i;
	char a[21][255];
	char *mul = "Hello";
	printf("%s\n",mul);
	char *add1;
	scanf("%s%s",a[1],a[2]);
	scanf("%d",&n);
	printf("%s %s\n",a[1],a[2]);
	i = 3;
		mul = multiply(a[1],a[1]);
		printf("%s\n",mul);
//		add1 = add(mul,a[i-2]);
//		printf("%s\n",add1);
/*	for(i = 3;i<=n;i++) {
		mul = multiply(a[i-1],a[i-1]);
		add1 = add(mul,a[i-2]);
		printf("%s\n",add1);
	}
	printf("%lf\n",a[n]);*/
//	char s1[] = "10";
//	char s2[] = "10"; 
//	printf("%s\n",add(s1,s2));
}
//0 1 10
//84266613096281243382112
