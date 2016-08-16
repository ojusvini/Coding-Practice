#include<stdio.h>
 
int main()
{
  FILE *fp = fopen("fileName.txt", "r");
  int ch = getc(fp);
  while (ch != EOF)
  {
    /* To display the contents of the file on the screen */
    putchar(ch);
 
    ch = getc(fp);
  }
   
  if (feof(fp))
     printf("\n Reached the end of file.");
  else
     printf("\n Something gone wrong.");
  fclose(fp);
     
  getchar();
  return 0;
}
