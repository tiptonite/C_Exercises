#include <stdio.h>

/*count blanks, tabs, and newlines*/
void main(){
  char c;
  int b,t,nl;
  b=0;
  t=0;
  nl=0;


  while((c=getchar())!=EOF)
    {
    if(c==' ')
      ++b;
    else if (c=='\t')
      ++t;
    else if (c=='\n')
      ++nl;
    printf("tabs: %d\nblanks: %d\nnewlines: %d\n",t,b,nl);
    }






}
