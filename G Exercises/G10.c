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

int main(int argc, char *argv[])
{
    int i;
  /* declare and initialize an array of Bulb pointers */
    struct Bulb *bptr[10];
  /* allocate memory for selected elements of the array */
  for(i=0;i<10;i++){
        bptr[i]=(struct Bulb*)malloc(sizeof(struct Bulb));
        bptr[i]->watts=100;
        bptr[i]->lumens=1000;
  }
  /* print the array */
    for(i=0;i<10;i++){
        printBulb(&bptr[i]);
    }
  /* deallocate memory for the Bulb */
    for(i=0;i<10;i++){

    free(bptr[i]);
    }
  system("pause");
  return 0;
}
