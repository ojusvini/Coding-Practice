#include <stdio.h>

struct n{
	int num;
	int p;
};

void copy(struct n a[10],struct n temp[10],int low,int up);
void merge(struct n a[10],struct n temp[10],int low1,int up1,int low2,int up2);
void merge_sort(struct n a[10],int low,int up)
{
	int mid;
	struct n t[10];
	if(low < up)
	{
		mid = (low + up)/2;
		merge_sort(a,low,mid);
		merge_sort(a,mid+1,up);
		merge(a,t,low,mid,mid+1,up);
		copy(a,t,low,up);
	}

}
void merge(struct n a[10],struct n temp[10],int low1,int up1,int low2,int up2)
{
	int i = low1;
	int j = low2;
	int k = low1;
	while((i <= up1) && (j <= up2))
	{
		if(a[i].num <= a[j].num)
		{
			temp[k].num = a[i].num;
			temp[k].p = a[i].p;
			k++;
			i++;
		}
		else {
			temp[k].num = a[j].num;
			temp[k].p = a[j].p;
			j++;
			k++;
		}
	}
	while(i <= up1)
	{
		temp[k].num = a[i].num;
			temp[k].p = a[i].p;
			k++;
			i++;
	}
	while(j <= up2)
	{
		temp[k].num = a[j].num;
		temp[k].p = a[j].p;
		k++;
		j++;
	}
}

void copy(struct n a[10],struct n temp[10],int low,int up)
{
	int i;
	for (i = low ; i <= up; i++)
	{
		a[i].num = temp[i].num;
		a[i].p = temp[i].p;
	}

}
int main()
{
	char a[][20]={"Dhaval","Shivang","Bhardwaj","Rishab","Maji","Gaurav","Dhruv","Nikhil","Rohan","Ketan"};
	int i,j;
	struct n s[10];
	
	for(i = 0;i<10;i++){
		scanf("%d",&s[i].num);
		s[i].p = i;
	}
	
	merge_sort(s,0,9);
	int ctr = 0;
	/*for(i=0;i<10;i++){
		printf("%d\t",s[i].p);
	}*/

	for(i = 0,j=9; i<=j; ){
		if(s[i].num ==s[j].num&&s[i].p<s[j].p){
			printf("%s\n",a[s[i].p]);
			i++;
		}
		else if(s[i].num ==s[j].num&&s[j].p<s[i].p){
			printf("%s\n",a[s[j].p]);
			j--;
		}
		else if(ctr%2==0){
			printf("%s\n",a[s[j].p]);
			j--;
			ctr++;
		}
		else{
			printf("%s\n",a[s[i].p]);
			i++;
			ctr++;
		}
				
	} 
	return 0;		
}
