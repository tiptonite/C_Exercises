#include <stdio.h>


void main(){
  char c;
  int b;
  b=0;
  while((c=getchar()) != EOF){

    if(c != ' ')
      {
	b=0;
	putchar(c);
      }
    if(c==' ')
      {
	if(b==0)
	  putchar(c);
	b++;
	    
      }
    






  }







}
