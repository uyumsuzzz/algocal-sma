/*
 n sayıda öğrencinin isim ve notlarını okuyup bir dosyada saklayan C programını yazınız. 
 Dosya daha önceden mevcutsa, bilgileri dosyaya ekleyin.
*/
#include <stdio.h>
typedef struct TABLO_tag {
    char isim[50];
    int not;
}tablo_t;

int main ()
{
    FILE *fp;

    int n;
    printf("kac tane ogrenci girilicek??");
    scanf("%d", &n);

    tablo_t ogr[n];

    for (int i=0; i<n; i++)
    {
        printf("%d. ogrenci isim: ", i+1);
        scanf("%s", ogr[i].isim);
        printf("%d. ogrenci not: ", i+1);
        scanf("%d", ogr[i].not);
        getchar();
    }

     fp = fopen ("notlar.txt", "w");
    
    if(fp == NULL)
    {
        printf("dosya acilamadi..");
        return 1;
    }
 
    for (int j=0; j<n; j++)
    {
        fprintf(fp, "%d. ogrenci\nisim:%s\nnot:%d\n\n", j+1, ogr[j].isim, ogr[j].not);
    }

    fclose(fp);
    printf("islemler kaydedildi, kapatiliyor..");

return 0;
}