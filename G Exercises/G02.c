#include <stdio.h>

struct
{
  int watts;
  int lumens;
}  bulbA, bulbB ;

int main(int argc, char *argv[])
{
  bulbA.watts=100;
  bulbA.lumens=1710;

  bulbB=bulbA;

  printf("%d\n",bulbB.watts);
  printf("%d\n",bulbB.lumens);

  system("PAUSE");
  return 0;
}
