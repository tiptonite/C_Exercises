#include <stdio.h>

void main()
{
  float fahr,celsius;
  int upper,lower,step;
  upper=300;
  lower=0;
  step=20;

  celsius=lower;
  printf("Celsius\tFahrenheit\n");
  while(celsius<=upper)
    {
      fahr=celsius*1.8+32;
      printf("%3.0f\t\t%6.1f\n",celsius,fahr);
      celsius=celsius+step;
    }

}
