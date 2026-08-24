#include <stdio.h>
void sinyal_yazdir(int dizi[])
{
        for (int i=0; i<5; i++)
        {
            printf("%d. sinyali giriniz..", i+1);
            scanf ("%d", &dizi[i]);
        }
    printf ("%d,%d,%d,%d,%d",dizi[0],dizi[1],dizi[2],dizi[3],dizi[4]);
}
float kritik_sinyal(int dizi[], int kritik)
{
    for (int i=0; i<5; i++)
    {
        if (dizi[i]>kritik)
        {
            printf("DIKKAT KRITIK SINYAL %d. eleman %d buyuklugu\n", i+1, dizi[i]);
        }
    }
return kritik;
}
int ortalama_deger(int dizi[])
{
    int boyut=0;
    int toplam=0;
    for (int i=0; i<5; i++)
    {
        boyut += dizi[i];
    }
    printf ("ortalama = %d", boyut/5);

return (float) boyut/5;
}
int main ()
{
    int kritik = 31;
    int dizi[5];
    
    sinyal_yazdir(dizi);
    printf("\n");
    kritik_sinyal(dizi, kritik);
    printf("\n");
    ortalama_deger(dizi);

return 0;
}