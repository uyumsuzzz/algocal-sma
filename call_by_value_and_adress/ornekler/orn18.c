#include <stdio.h>

// Geriye 'int pointer' (adres) döndüren fonksiyon
int *negatif_bul(int dizi[], int boyut) {
    for(int i = 0; i < boyut; i++) {
        if(dizi[i] < 0) {
            return &dizi[i]; // Eksi sayıyı bulduğu an KENDİSİNİ değil, ADRESİNİ fırlatıyor
        }
    }
    return NULL; // Bulamazsa hiçlik döndür
}

int main() {
    int sayilar[] = {10, 25, 40, -5, 80};
    
    // Fonksiyondan gelen adresi 'p' pointer'ına hapsediyoruz
    int *p = negatif_bul(sayilar, 5);

    if(p != NULL) {
        printf("Bulunan sayi: %d\n", *p); // Ekrana -5 basar
        
        *p = 99; // RAM'deki o adrese gidip -5'i eziyor ve 99 yapiyor!
        printf("Dizinin yeni hali: %d\n", sayilar[3]); // Ekrana 99 basar
    }

    return 0;
}