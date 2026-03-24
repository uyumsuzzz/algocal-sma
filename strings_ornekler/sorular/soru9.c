// girilen stringler esit mi fonk kullanmadan
#include <stdio.h>
#include <string.h>
int main ()
{
    char dizi1[30];
    char dizi2[30];
    int flag=0;
    printf("1. cumleni gir.");
    fgets(dizi1, 30, stdin);
    printf("2. cumleni gir.");
    fgets(dizi2, 30, stdin);

    for(int i=0; dizi1[i] != '\0'; i++)
    {
        if(dizi1[i]!=dizi2[i])
        {
            flag = 1;
            break;
        }
    }
    
    if(flag==0)
    printf("esitler!");
    else
    printf("esit degiller, hicbir insanin esit olmadigi gibi..");

return 0;
}