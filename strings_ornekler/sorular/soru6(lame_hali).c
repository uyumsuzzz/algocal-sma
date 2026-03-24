#include <stdio.h>
#include <string.h> // kullan demiş soruda o yüzden bu halini de yazmalı
int main ()
{
    char str[100];
    int flag = 1; // Varsayım: Polindrom

    printf("Kelimeni gir: ");
    // 100 kutuluk yere en fazla 99 harf al (1 kutu \0 için kalsın)
    scanf("%99s", str); 

    int uzunluk = strlen(str); 

    // 2. ADIM: Kelimenin sadece yarısına kadar dönmek yeterli
    for(int i = 0; i < uzunluk / 2; i++) 
    {
        // Baştaki harf ile sondaki harfi simetrik olarak kıyasla
        if (str[i] != str[uzunluk - 1 - i]) 
        {
            flag = 0;
            break;
        }
    }

    if(flag == 0)
        printf("Polindrom degil\n");
    else
        printf("Polindrom\n");

    return 0;
}