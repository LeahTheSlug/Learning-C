#include <stdio.h>

//second version of counting characters

int main()
{
  double nc;

  for(nc = 0; getchar() != EOF; ++nc);
    printf("%.0f\n", nc);
}
