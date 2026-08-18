// Klavyeden girilen iki stringi strcat kullanmadan birleştiren programı yazınız.
#include <stdio.h>
#include <string.h>
int main ()
{
    char str1[100]="beraber kalsaydik ";
    char str2[100]="mutlu olur muyduk?";
    int uzunluk1 = strlen(str1);
    int uzunluk2 = strlen(str2);
    int i;
        
        for(i=0; i<uzunluk2 ;i--)  
        {
            str1[uzunluk1 + i]=str2[i]; 
        }

str1[uzunluk1 + uzunluk2] = '\0';  
printf("%s ", str1);

return 0;
}