#include <stdio.h>

struct Bulb
{
  int watts;
  int lumens;
};

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
  /* declare and initialize a Bulb array */
  #define length 5
  struct Bulb lights[length] = { {100,1710}, {60,1065}, {100,1530}, {40,505}, {75,830} };

  /* print the Bulbs */
  int i;
    for(i=0;i<length;i++){
        printBulb(&lights[i]);
    }

  /* decrease light output of each Bulb */
  for(i=0;i<length;i++){
  dimBulb(&lights[i]);
  }
  /* print the Bulbs */
  printf("\n");
    for(i=0;i<length;i++){
        printBulb(&lights[i]);
    }
  system("pause");
  return 0;
}
