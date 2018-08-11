#include <stdio.h>

void main(){

  char c;
  while((c=getchar()) != EOF)
    {

      if(c==' ' || c=='\t')
	putchar('\n');
      else putchar(c);




    }



}
