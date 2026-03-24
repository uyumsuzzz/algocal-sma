// String fonksiyonlarını kullanarak girilen bir stringin polindrome olup olmadığını bulan programı yazınız.
#include <stdio.h>
int main ()
{
    char str[100];
    printf("kelimeni gir..");
    scanf("%99s", str);  // 100 kutu ayırdık 99 karakter alınabilsin -> overflow engelleme
    int flag = 1;  // varsayım -> polindrom olduğu

    char *p1;  // normal string başlangıcının adresi
    char *p2;  // tersten ilerleyecek adres
    p1 = str;
    p2 = str; 
    
    while (*p2 != '\0')
    {
        p2++;
    }  // döngü bittiğinde p2 tam olarak \0 ın başına oturur o yüzden bir kutu eksiltmeli
    p2--;  

    while(p1 < p2)  // p1'in adresi p2'nin adresinden küçükken
    {
        if (*p1 != *p2)
        {
            flag=0;
            break;
        }
        p1++;
        p2--;
    }

    if(flag==0)
    printf("polindrom degil");
    else
    printf("polindrom");

// ayıdan post, hazır kütüphane kullananlardan dost olmaz (üsküdar çocuğu raconu)
return 0;
}