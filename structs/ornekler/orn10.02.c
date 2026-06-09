/*
isim ve yaş bilgisini tutan öğrenci nesnesi oluşturun. ekrandan iki öğrencinin ismi girilecek ve öğrenci türünden nesnelere
aktarılacaktır. bu iki nesnedeki isimlerin aynı olup olmadığını yazan kod
*/
// KÜTÜPHANESİZ
#include <stdio.h>

typedef struct OGRENCI_tag{
    char isim[20];
    int yas;
}ogrenci_t;
int main ()
{
    ogrenci_t ogr1, ogr2;

    printf("1. ogrencinin\nismi: ");
    scanf("%19s", ogr1.isim);
    printf("yasi: ");
    scanf("%d", &ogr1.yas);

    printf("2. ogrencinin\nismi: ");
    scanf("%19s", ogr2.isim);
    printf("yasi: ");
    scanf("%d", &ogr2.yas);

    // eşitlik kontrolü
    int flag = 0;  // eşit olduğu varsayımı
    int i = 0;

    while(ogr1.isim[i]!='\0' || ogr2.isim[i]!='\0')
    {
            if(ogr1.isim[i]!=ogr2.isim[i])
            {
                flag = 1;
                break;
            }
    i++;
    }
    
    if(flag == 0)
    {
        printf("isimler esit!");
    }
    else
    {
        printf("isimler esit degil.");
    }
return 0;
}