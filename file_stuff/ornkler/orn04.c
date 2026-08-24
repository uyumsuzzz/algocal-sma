/*
kaynak dosyası algo2.c ile aynı konumda olan dosya.txt dosyasında kaç adet a harfinin olduğunu bulan yazınız 
*/
#include <stdio.h>

int main() {
    FILE *dosya;
    int karakter; // fgetc fonksiyonu EOF döndürebilmek için char değil int kullanır
    int a_sayisi = 0;

    // 1. Kapıyı Aç: Dosyayı "r" (Read - Okuma) modunda aç.
    dosya = fopen("dosya.txt", "r");

    // Dosya yoksa veya adını yanlış yazdıysak program çökmesin diye güvenlik kontrolü
    if (dosya == NULL) {
        printf("Hata: dosya.txt bulunamadi!\n");
        return 1;
    }

    // 2. İşini Hallet: Dosyanın sonuna (EOF) gelene kadar harfleri tek tek oku
    while ((karakter = fgetc(dosya)) != EOF) {
        
        // Eğer okunan karakter küçük 'a' ise sayacı artır
        if (karakter == 'a') {
            a_sayisi++;
        }
    }

    // 3. Kapıyı Çekip Çık
    fclose(dosya);

    printf("Dosya icerisindeki 'a' harfi sayisi: %d\n", a_sayisi);

    return 0;
}