#include <stdio.h>

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
    int i;
  /* declare an array of 10 Bulbs */
  struct Bulb bulbs[10];

  /* zero all Bulbs */
  for(i=0;i<sizeof(bulbs);i++)
  {
      bulbs[i].watts=0;
      bulbs[i].lumens=0;
  }

  /* initialize several Bulbs */
  for(i=0;i<7;i++)
  {
      bulbs[i].watts=120;
      bulbs[i].lumens=250;
  }

  /* print values of Bulbs */
  for(i=0;i<sizeof(bulbs);i++)
  {
      printBulb(bulbs[i]);
  }

  //system("PAUSE");
  return 0;
}
