//String fonksiyonlarını kullanarak girilen bir stringin polindrome olup olmadığını bulan programı yazınız.
#include <string.h>
#include <stdio.h>
int main ()
{
    char str[100];
    printf("kelimeni gir..");
    scanf("%s", str);
    int flag = 1;

    char *p1;  // normal string başlangıcı
    char *p2;  // tersten adres ilerlicek geriye
              // uzunluk bulunduğunda içinde '\0' dahildir.

    p1 = str;
    p2 = str + strlen(str)-1;  // en sonki harfin olduğu yere gitmek için '\0' ın 1 öncesine gidilmeli

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

return 0;
}
