#include <stdio.h>

#define length 10

struct Bulb
{
  int watts;
  int lumens;
};



/* function to print the array */
void printArray( struct Bulb b[] , int size )
{
    int i;
    for(i=0;i<size;i++){
        printf("%d\n",b[i].watts);
        printf("%d\n",b[i].lumens);
    }
}

int main(int argc, char *argv[])
{
    int i;
  /* declare and initialize an array of length Bulbs */
    struct Bulb bulbs[length];
    for(i=0;i<length;i++){
        bulbs[i].watts=100;
        bulbs[i].lumens=1710;
    }

  /* print the array */
  printArray(bulbs,length);

  system("pause");
  return 0;
}
