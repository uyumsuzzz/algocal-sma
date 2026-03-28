// Pointer kullanarak ve dinamik olarak girilen bir stringi ters çeviren programı yazınız.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main ()
{
    while (1)
    {
    char *sehir = (char*) malloc(1*sizeof(char));  // sehir için  1 yer ayırdık
    int i = 0;  // sayaç
    char harf;   // harf harf alacağız

    printf("sehir ismini yaziniz..");

        while ((harf = getchar()) != '\n')    
        {
            *(sehir + i) = harf;   
            i++;

            sehir = (char*) realloc(sehir,(i+1)*sizeof(char));  // her yeni harf alındıktan sonra yer aç
        }
    *(sehir+i) = '\0'; // stringi tamamlamakı için en sonuna '\0' yerleştirilmeli 

    if (i > 0) // kullanıcı kelime girdiyse
    {
        strrev(sehir);
        printf("%s", sehir);  // %s kullanıldıpında direkt adres verilir ve \0 görene kadar yazdırır
        
    }
    
    free(sehir);
    }
return 0;
}