#include <stdio.h>
char days[][30]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};

int main()
{	int mo[]={1,4,4,0,2,5,0,3,6,1,4,6};
	int date,month,year,t,r,s,century,y,f;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d%d",&date,&month,&year);
		s=0;
		if(year%1000==0)century = year/100;
		else century=year/100 +1;
		century=century%4;
		s=date%7;
		printf("after date s = %d",s);
		f=year;
		year=year%100;
		s=s+mo[month-1];
		printf("after month s = %d\n",s);		
		if(year==0)y=4;
		else{
		 y=(year+(year/4));
		if(year%4==0)y=(y-2)%7;
		else y = (y-1)%7;
		}
	 	s=s+y;
 		printf("after year s = %d",s);
	 	if(century==1)s=s+6;
		else if(century==2)s=s+4;
		else if(century==3)s=s+2;
		printf("after century s = %d\n",s);
	 	
		 if(month>2){
	 		if(f%400==0)s++;
	 		else if(f%100==0);
	 		else if(f%4==0)s++;
	 	}	

		printf("after leap year s = %d\n",s);
		s=s%7;
		printf("%s\n",days[s]);
	}
	return 0;
}
