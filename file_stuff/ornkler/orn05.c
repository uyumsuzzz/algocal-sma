/*
 n sayıda öğrencinin isim ve notlarını okuyup bir dosyada saklayan C programını yazınız. 
 Dosya daha önceden mevcutsa, bilgileri dosyaya ekleyin. (structssız)
*/
#include <stdio.h>
int main ()
{
    FILE *p;
    int n;
    char isim[50];
    int not;

    printf("kac ogrenci var??");
    scanf("%d", &n);
    
    
    p = fopen("dosya.txt", "a");
    if(p == NULL)
    {
        printf("ERROR");
        return 1;
    }

    for(int i=0; i<n; i++)
    {
        getchar();
        printf("%d. ogrenci isim gir..", i+1);
        fgets(isim, 50, stdin);

        printf("%d. ogrenci not gir..", i+1);
        scanf("%d", &not);

        fprintf(p, "%d. ogrenci isim=%s, not=%d\n", i+1, isim, not);
    }

    fclose(p);
    printf("bilgiler kaydedildi, kapatiliyor..");
return 0;
}
