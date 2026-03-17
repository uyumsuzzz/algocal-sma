//girilen stringi ters yazdırma
#include <string.h>
#include <stdio.h>
int main ()
{
    char str[150];
        printf("stringi giriniz..");
        fgets(str, sizeof(str), stdin);
    int uzunluk = strlen(str); 
    
        for(int i=uzunluk-1; i>=0; i--)
        {
            printf("%c", str[i]);
        }



return 0;
}