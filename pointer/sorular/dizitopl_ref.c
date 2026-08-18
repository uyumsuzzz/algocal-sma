#include <stdio.h>
#include <string.h>
void dizi_topla(int *dizi, int boyut, int *toplam) // kullanacağımız dizi, onun boyutu, cevabı kaydettiğimiz alan
{
    // void kullandık çünkü cevabı zaten rame yazdırıcaz, bir şeyin return etmesine gerek yok
    
    *toplam = 0;
        for(int i=0; i<boyut; i++)
        {
            *toplam += *(dizi+i);
        }
}
int main ()
{
    int sayilar[]={0,1,2,3,4,5};
    int boyut=6;
    int sonuc;

    dizi_topla(sayilar, boyut, &sonuc); // sonuc'un adresini (pointer olarak tanımladığımız(adres istio)) yere 
    printf("%d", sonuc);                // verdikki onun üstünde işlem yapılsın. sonra normal olarak sonucun içini oku

return 0;
}