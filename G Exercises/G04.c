#include <stdio.h>

struct Bulb
{
  int watts;
  int lumens;
};

/* function to print a Bulb */
void printBulb( struct Bulb *blb )
{
  printf("watts = %d\tlumens = %d\n", blb->watts, blb->lumens );
}

int main(int argc, char *argv[])
{
  struct Bulb bulbA = {100, 1710 }, bulbB = {60, 1065};

  printBulb( &bulbA );
  printBulb( &bulbB );
  system("PAUSE");
  return 0;
}
