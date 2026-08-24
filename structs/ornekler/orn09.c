/*
100 öğrencinin isim ve yaş bilgisini tutacak öğrenci nesneleri oluşturun.Ekrandan öğrencilerin sırasıyla
isim ve yaşları girilecek ve öğrenci türünden nesnelere aktarılacaktır. Yaşı en büyük olan öğrencinin
ismini ekrana yazdırın. (dizi pointer kullanılamaz structure dizisi kullanılacak)
*/
#include <stdio.h>
#define SAYI 3
typedef struct OGRENCI_tag{
    char isim[50];
    int yas;
}ogrenci_t;
int main ()
{
    ogrenci_t ogr[SAYI];
    for(int i=0; i<SAYI; i++)
    {
        printf("%d. ogrenci isim= ", i+1);
        scanf("%s", ogr[i].isim);

        printf("%d. ogrenci yas= ", i+1);
        scanf("%d", &ogr[i].yas);
    }

    int max = 0; // 0. index maxı içeren dizi olsun
    for(int j=0; j<SAYI; j++)
    {
        if(ogr[j].yas > ogr[max].yas)
        max = j;
    }

    printf("yasi en yuksek ogrenci %s isimli, yasi %d\n", ogr[max].isim, ogr[max].yas);

return 0;
}