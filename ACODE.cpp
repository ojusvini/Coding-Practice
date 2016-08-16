#include <stdio.h>
#include <string.h>
long long int dp[5005];

int main(){
	char a[5010];
	long long int l,i,num;
	while(1){
		scanf("%s",a);
		if(a[0]=='0') break;
		else {
			l = strlen(a);
			dp[0] = 1;
			for(i = 1;i<=l;i++){
				dp[i] = 0;
				num = (a[i-1]-'0')*10 + (a[i]-'0');
				if(a[i] > '0' && a[i] <= '9') dp[i] = dp[i-1];
				if(num>=10&&num<=26){
					if(i-2>=0){
						dp[i]+=dp[i-2];
					}
					else {
						dp[i]++;
					}
				}
			}	
		}
		printf("%lld\n",dp[l-1]);
	}
	return 0;
}
