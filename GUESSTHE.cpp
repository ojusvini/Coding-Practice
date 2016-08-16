#include <stdio.h>
#include <string.h>
long long int lcm(long long int a,long long int b){
     long long int temp = a;

    while(1){
         if(temp % b == 0 && temp % a == 0)
             break;
         temp++;
    }
    return temp;
}

int main()
{
	char s[21];
	int flag;
	long long int l,len,i;
	scanf("%s",s);
	while(strcmp(s,"*")){
		flag = 0;
		len = strlen(s);
		l = 1;
		for(i = 1; i < len; i++)
		{
			if(s[i]=='Y')
			l = lcm(l,i+1);
			else if(l%(i+1)==0)
			{	flag = 1;
				break;
			}
		
		}
		if(flag)
		printf("-1\n");
		else printf("%lld\n",l);
		scanf("%s",s);
		
	}
	
}


