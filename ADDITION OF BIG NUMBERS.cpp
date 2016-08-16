#include<stdio.h>
	
int main() {
	int a[255], b[255], sum[255],carry = 0,k = 0,i,j;
	char s1[255], s2[255];
	int l1, l2;
	
	scanf("%s",&s1);
	scanf("%s",&s2);
	
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
	
	
	printf("Result = ");
	for (k--; k >= 0; k--)
	printf("%d", sum[k]);
	
	return 0;
}
