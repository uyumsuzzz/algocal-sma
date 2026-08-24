/*
Kullanıcıdan öğrencilerin isim ve not bilgileri alınacaktır. Giriş işlemi kullanıcı 'q' yazana kadar
devam edecektir. Girilen bilgiler ogrenci.txt dosyasına kaydedilecektir.
Daha sonra dosya EOF kullanılarak okunup:
+ tüm öğrenciler
+ sınıf ortalaması
ekrana yazdırılacaktır.
*/
#include <stdio.h>
#include <string.h>
typedef struct {
    char isim[50];
    int not;
}ogrenci_t;
int main ()
{
    FILE *ptr1 = fopen("ogrenci.txt", "w");
    if(ptr1 == NULL) return 1;

    ogrenci_t ogr1;
    int ogr_sayisi=0;

    printf("cikmak icin 'q' basiniz..\n");
    while(1)
    {   
        printf("isim: ");
        scanf("%s",ogr1.isim);

        if(strcmp(ogr1.isim, "q")== 0)
        {
            printf("cikiliyor..\n");
            break;
        }

        printf("not: ");
        scanf("%d", &ogr1.not);

        fprintf(ptr1, "%s %d\n", ogr1.isim, ogr1.not); 
    }
    fclose(ptr1);

    /*************************************************/

    FILE *ptr2 = fopen("ogrenci.txt", "r");
    if(ptr2 == NULL) return 1;

    ogrenci_t ogr2;

    int top = 0;
    float ort = 0;

    while(fscanf(ptr2, "%s %d", ogr2.isim, &ogr2.not)!=EOF)
    {
        printf("%s %d\n", ogr2.isim, ogr2.not);
        top += ogr2.not;
        ogr_sayisi++;
    }
    fclose(ptr2);
    
    if(ogr_sayisi > 0)
    {
        ort = top / ogr_sayisi;
        printf("ortalama: %f", ort);
    }


return 0;
}