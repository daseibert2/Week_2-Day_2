#include <stdio.h>

struct
{
  int watts;
  int lumens;
} bulbA;

int main(int argc, char *argv[])
{
  bulbA.watts=100;
  bulbA.lumens=1710;

  printf("%d\n",bulbA.watts);
  printf("%d\n",bulbA.lumens);

  system("PAUSE");
  return 0;
}

