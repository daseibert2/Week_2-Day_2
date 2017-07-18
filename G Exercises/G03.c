#include <stdio.h>

/* declare the type struct Bulb (Notice the tag) */

struct Bulb
{
  int watts;
  int lumens;
};

/* function to print a Bulb */
void printBulb( struct Bulb b )
{
    printf("%d\n",b.watts);
    printf("%d\n",b.lumens);
}

int main(int argc, char *argv[])
{
  /* declare and initialize two Bulbs */
  struct Bulb a,b;
  a.watts=100;
  a.lumens=1710;
  b=a;

  /* print values of both Bulbs */
  printBulb(a);
  printBulb(b);

  system("PAUSE");
  return 0;
}
