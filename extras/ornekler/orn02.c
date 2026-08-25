#include <stdio.h>

int main() {

    const int MAX_OYUNCU = 100;

    int mevcutOyuncu;

    printf("Mevcut oyuncu sayisini giriniz: ");
    scanf("%d", &mevcutOyuncu);

    if(mevcutOyuncu > MAX_OYUNCU){

        printf("Sunucu dolu! Oyuncu limiti asildi.\n");

    }
    else{

        printf("Oyuna giris yapabilirsiniz.\n");

        printf("Bos yer sayisi: %d\n",
               MAX_OYUNCU - mevcutOyuncu);
    }

    return 0;
}