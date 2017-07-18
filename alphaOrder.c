#include <stdio.h>
#include <string.h>
#include <time.h>

void swap(char a[8], char b[8])
{
    char temp[8];
    strcpy(temp, a);
    strcpy(a, b);
    strcpy(b, temp);
}

int main()
{
    int n,i,j,k;
    char list[20][8],w[20][8];
    printf("Enter the value of n: \n");
    scanf("%d",&n);
    printf("Enter %d names: \n",n);
    for(i=0;i<n;i++)    //good, i think
    {
        scanf("%s",w[i]);
        strcpy(list[i],w[i]);
        printf("\n");
    }
    //quick_sort(list, 0, n-1);
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(strcmp(list[i],list[j])>0){
            swap(list[i],list[j]);
            }
        }
    }

printf("Input Names \t\t Output Names\n");
    for(k=0; k< n; k++)
        printf("%s \t\t\t %s\n",w[k],list[k]);


    return 0;
}
