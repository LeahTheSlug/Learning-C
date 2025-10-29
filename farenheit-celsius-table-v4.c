#include <stdio.h>
//function way to do farenheight celcius table 

#define LOWER  0    //lower limit of table
#define UPPER  300  //upper limit
#define STEP   20   //step size

int main()
{
  int fahr;

  for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
    printf("%3d %6.1f\n", fahr, conversion(fahr);
}

double conversion(int f)
  {
    int i;
    double celcius;
    
    celcius = 0;
    for (i = LOWER; i <= f; i = i + STEP)
      celcius = 5.0 * (f - 32) / 9.0;
    return celcius;
  }
