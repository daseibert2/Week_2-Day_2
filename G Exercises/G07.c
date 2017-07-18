#include <stdio.h>

struct Bulb
{
  int watts;
  int lumens;
};

/* function to print a Bulb */
void printBulb( struct Bulb* b )
{
    printf("%d\n",b->watts);
    printf("%d\n",b->lumens);
}

void dimBulb( struct Bulb* b )
{
    b->lumens=(b->lumens*90)/100;
}

int main(int argc, char *argv[])
{
  /* declare and initialize a Bulb */
  struct  Bulb bulbA;
  bulbA.watts=120;
  bulbA.lumens=1000;

  /* print the Bulb */
  printBulb(&bulbA);
  /* decrease its light output */
  dimBulb(&bulbA);
  /* print the Bulb */
  printBulb(&bulbA);

  system("pause");
  return 0;
}
