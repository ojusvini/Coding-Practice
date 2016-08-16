#include <stdio.h>

int main()
{

	char l,w;
	scanf("%c %c",&l,&w);
	//printf("%d %d",l,w);
	if(l==w||l==(w-32)||l==(w+32))
	printf("YES");
}
