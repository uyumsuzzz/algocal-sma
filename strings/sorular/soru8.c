// iki cümlenin aynı olup olmadığını yazdırın (fonk serbest)
#include <stdio.h>
#include <string.h>
int main ()
{
    char dizi1[30];
    char dizi2[30];
    printf("1. cumleni gir.");
    fgets(dizi1, 30, stdin);
    printf("2. cumleni gir.");
    fgets(dizi2, 30, stdin);

    if(strcmp(dizi1, dizi2)==0)
    printf("esitler!");
    else
    printf("esit degiller, hicbir insanin esit olmadigi gibi..");

return 0;
}