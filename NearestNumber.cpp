#include <stdio.h>

int bsearch(int a[],int low,int up,int key){
int mid;
while(low<=up){
	printf("low - %d up = %d\n",low,up);
	mid = (low +up)/2;
	if(a[mid]==key||(a[mid]<key&&a[mid+1]>key&&mid+1<=up))
		return mid;
	else if(a[mid]>key)	{
		up = mid -1;
	}
	else low = mid+1;
}
return -1;
}

int main()
{
	int a[]={11,20,25,67,84,93};
	printf("%d",bsearch(a,0,5,30));
}
