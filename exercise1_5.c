#include <stdio.h>

void main()
{
  float fahr;
  printf("Fahrenheit\tCelsius\n");
  for(fahr=300;fahr>=0;fahr=fahr-20)
    {
      printf("%3.0f\t\t%6.1f\n",fahr,fahr*1.8+32);
      

    }






}
