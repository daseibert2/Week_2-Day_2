#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * fPointer;
    fPointer = fopen("random_text_attempt.txt","r");   //w=write(start), r=read, a=append(end), w+=write anywhere, random access
    char singleLine[180];

    while(!feof(fPointer)){
        fgets(singleLine,150,fPointer);
        puts(singleLine);
    }
    // /fprintf -> w and a
    //fseek(fPointer, 6, SEEK_SET); -> start writing 7 spaces to right, left to right -> w+
    // SEEK_END -> moves back from right to left
    //fputs("String");

    fclose(fPointer);

    return 0;

}
